#include <iostream>
#include "Course.cpp"
#include "Student.cpp"

void print_students_of_given_course(int course_id);

int main() {
    Course cpp(1111, 202, "Arne Kutzner");
    Course python(2222, 108, "Heidi Cho");
    Course korean(3333, 502, "Hye yoon Sung");

    Student audrey("Audrey", 1);
    audrey.add_Course(python);
    audrey.add_Course(korean);

    Student lucia("Lucia", 2);
    lucia.add_Course(korean);

    Student sonja("Sonja", 3);
    sonja.add_Course(python);
    sonja.add_Course(korean);
    sonja.add_Course(cpp);

    print_students_of_given_course(3333);
    print_students_of_given_course(2222);
    print_students_of_given_course(1111);
    print_students_of_given_course(1234);

}

void print_students_of_given_course(int course_id) {

    Course course;
    for (Course *c: Course::all_courses) {
        if (c->id == course_id)
            course = *c;
    }
    if (course.id != course_id) {
        std::cout << "\nThere is no course with id " << course_id << std::endl;
        return;
    }

    std::cout << "\nCourse " << course_id << " has the following students enrolled:" << std::endl;
    for (Student *student: Student::all_students) {
        if (student->is_enrolled(course_id))
            std::cout << ">> " << student->get_name() << ", " << student->get_number() << std::endl;
    }
}

