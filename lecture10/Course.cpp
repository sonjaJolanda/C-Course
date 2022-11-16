#include <cstring>
#include <list>

class Course {
public:
    int id;
    int room_nr;
    char instructor[100] = "Unknown";
    static std::list<Course *> all_courses;
public:
    Course() {
        this->id = 0000;
        this->room_nr = 0;
        //all_courses.push_back(*this);
    }

    Course(int id, int room_nr, char instructor[]) {
        this->id = id;
        this->room_nr = room_nr;
        std::strcpy(this->instructor, instructor);
        all_courses.push_back(this);
    }
};

std::list<Course *> Course::all_courses;

