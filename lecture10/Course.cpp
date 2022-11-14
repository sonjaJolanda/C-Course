#include <cstring>
#include <list>

class Course {
//----------- attributes
public:
    int id;
    int room_nr;
    char instructor[100] = "Unknown";
    static std::list<Course> all_courses; // ToDo why are there so many courses in here

//----------- methods
public:
    Course() {
        this->id = 0000;
        this->room_nr = 0;
        all_courses.push_back(*this);
    }

    Course(int id, int room_nr, char instructor[]) {
        this->id = id;
        this->room_nr = room_nr;
        std::strcpy(this->instructor, instructor); // ToDo this is probably not the way to go but how else?
        all_courses.push_back(*this);
    }

    ~Course() {
        // ToDo Destructor
    }

};

std::list<Course> Course::all_courses;

