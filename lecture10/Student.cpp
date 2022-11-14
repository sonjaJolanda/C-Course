#include <cstring>
#include <list>
#include <iostream>

class Student {
//----------- attributes
private:
    char name[100] = "Unknown";
    int number;
    Course courses[10];
    int nr_courses = 0;
public:
    static std::list<Student> all_students;
//----------- methods
public:
    Student() {
        this->number = 0000;
    }

    Student(char name[], int number) {
        std::strcpy(this->name, name);
        this->number = number;
        all_students.push_back(*this);
    }

    ~Student() {
        //ToDo
    }

    // getter and setter
    char *get_name() {
        return this->name;
    }

    void set_name(char name[]) {
        std::strcpy(this->name, name);
    }

    int get_number() {
        return this->number;
    }

    // ToDo delete after
    int get_number_of_courses() {
        return this->nr_courses;
    }

    void set_number(int number) {
        this->number = number;
    }

    Course *get_courses() {
        return this->courses;
    }

    void add_Course(Course course) {
        this->courses[this->nr_courses] = course;
        this->nr_courses += 1;
        std::cout << "nr_courses added (" << this->name << ") now: " << this->nr_courses << std::endl;
    }

    bool is_enrolled(int course_id){
        // Course courses[this->nr_courses] = this->courses;
        Course* courses = this->courses;
        for (int i = 0; i < nr_courses; i++){
            if (courses[i].id == course_id)
                return true;
        }
        return false;
    }
};

std::list<Student> Student::all_students;