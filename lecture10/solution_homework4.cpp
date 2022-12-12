#include <iostream>

void stringCopy(char *dest, const char *src) {
    while (*src != 0) *dest++ = *src++;
    *dest = '\0';
}

/* problem d) */
class Course {
public:
    int Id; // Course Id
    char Instructor[100]; // Name of Instructor
    int RoomNr; // Room number

    Course() {
        this->reset();
    }

    // resets the data of the current course
    void reset(void) {
        this->Id = 0;
        this->Instructor[0] = '\0';
        this->RoomNr = 0;
    }
};

/* problem a) */
class Student {
private: // problem b)
    char Name[100];
    int Number;
    int Courses[10]; // We use the course ID (int) over here!

public:
    // problem c
    Student() {
        Number = 0;
        Name[0] = '\0';
        for (int i = 0; i < 10; i++)
            Courses[i] = 0;
    }

    // problem c
    Student(int IntialNumber,
            const char *InitialName) {
        Number = IntialNumber;
        this->setName(InitialName);
        for (int i = 0; i < 10; i++)
            Courses[i] = 0;
    }

    int getNumber(void) { return this->Number; }

    void setNumber(int NewNumber) { this->Number = NewNumber; }

    char *getName(void) { return this->Name; }

    void setName(const char *NewName) { stringCopy(this->Name, NewName); }

    int getCourse(int Index) { return Courses[Index]; }

    void setCourse(int Index, int courseId) { this->Courses[Index] = courseId; }

    // adds a new course at first free spot
    void addCourse(int courseId) {
        for (int i = 0; i < 10; i++) {
            if (Courses[i] == 0)
                Courses[i] = courseId;
        }
    }

    // checks whether for course visit
    bool visitsCourse(int CourseId) {
        for (int i = 0; i < 10; i++) {
            if (Courses[i] == CourseId)
                return true;
        } // for
        return false;
    }
};

/* Problem f) */
void queryStudents(Student *students, int studentsSize, int courseId) {
    for (int i = 0; i < studentsSize; i++) {
        if (students[i].visitsCourse(courseId)) {
            std::cout << "student: " << students[i].getNumber() << " (" << students[i].getName()
                      << ") visits the course " << courseId << std::endl;
        }
    }
}

/* Problem e) */
void manageCourses(Course *courses, int coursesSize, Student *students, int studentsSize) {
    while (true) {
        std::cout << "1: Change course data, 2: Query Students, 3: Assign Student to Course, 0:Back" << std::endl;
        int selection;
        std::cin >> selection;
        if (selection == 0)
            break;
        switch (selection) {
            case 1:
                std::cout << "Index in Course Array (0..9):" << std::endl;
                int index;
                std::cin >> index;
                std::cout << "Course Id (int):" << std::endl;
                int courseId;
                std::cin >> courseId;
                std::cout << "Instructor Name:" << std::endl;
                char InstructorName[100];
                std::cin >> InstructorName;
                std::cout << "Course Room Nr (int):" << std::endl;
                int courseRoomNr;
                std::cin >> courseRoomNr;

                stringCopy(courses[index].Instructor, InstructorName);
                courses[index].Id = courseId;
                courses[index].RoomNr = courseRoomNr;
                std::cout << "At index " << index
                          << " the Course Id is " << courses[index].Id
                          << " and the Instructor Name is " << courses[index].Instructor
                          << " and the Room Nr is " << courses[index].RoomNr
                          << std::endl;
                break;
            case 2:
                std::cout << "Course Id (int):" << std::endl;
                std::cin >> courseId;
                queryStudents(students, studentsSize, courseId);
                break;
            case 3:
                std::cout << "Course Id (int):" << std::endl;
                std::cin >> courseId;
                std::cout << "Index in Student Array (0..9):" << std::endl;
                std::cin >> index;
                students[index].addCourse(courseId);
                break;
            default:
                std::cout << "Wrong input";
        }
    }
}

/* Problem e) */
void manageStudents(Student *students, int studentsSize) {
    while (true) {
        std::cout << "1: Change student data, 0:Back" << std::endl;
        int selection;
        std::cin >> selection;
        if (selection == 0)
            break;
        std::cout << "Index in Student Array (0..9):" << std::endl;
        int index;
        std::cin >> index;
        std::cout << "Student Number:" << std::endl;
        int studentNumber;
        std::cin >> studentNumber;
        std::cout << "Student Name:" << std::endl;
        char studentName[100];
        std::cin >> studentName;
        students[index].setName(studentName);
        students[index].setNumber(studentNumber);
        std::cout << "At index " << index
                  << " the Student Number is " << students[index].getNumber()
                  << " and the Student Name is " << students[index].getName() << std::endl;
    }
}

/* Problem e) */
int main() {
    Student students[10];
    Course courses[10];
    while (true) {
        std::cout << "1: Manage Courses, 2: Manage Students, 0:Exit" << std::endl;
        int selection;
        std::cin >> selection;
        if (selection == 0)
            break;
        switch (selection) {
            case 1:
                manageCourses(courses, 10, students, 10);
                break;
            case 2:
                manageStudents(students, 10);
                break;
            default:
                std::cout << "Wrong input";
        }
    }
}
