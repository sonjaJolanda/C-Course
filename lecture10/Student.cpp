#include <cstring>
#include <list>
#include <iostream>

class Student {
private:
    char name[100] = "Unknown";
    int number;
    Course courses[10];
    int nr_courses = 0;
public:
    static std::list<Student *> all_students;
public:
    Student() {
        this->number = 0000;
    }

    Student(char name[], int number) {
        std::strcpy(this->name, name);
        this->number = number;
        all_students.push_back(this);
    }

    char *get_name() {
        return this->name;
    }

    void set_name(char name[]) {
        std::strcpy(this->name, name);
    }

    int get_number() {
        return this->number;
    }

    void set_number(int number) {
        this->number = number;
    }

    Course *get_courses() {
        return this->courses;
    }

    void add_Course(Course &course) {
        this->courses[this->nr_courses] = course;
        this->nr_courses += 1;
    }

    bool is_enrolled(int course_id) {
        for (int i = 0; i < nr_courses; i++) {
            if (this->courses[i].id == course_id)
                return true;
        }
        return false;
    }
};

std::list<Student *> Student::all_students;