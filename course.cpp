#include <iostream>
using namespace std;

class Course {
public:
    string courseName;
    string courseCode;
    string instructorName;
    int credits;

    void displayInfo() {
        cout << "Instrctor Name: " << instructorName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
    }

    bool isHighCredit() {
        return credits > 3;
    }
    bool isLabRequired() {
        return credits > 4;
    }
};

int main() {
    Course course1;
    course1.instructorName = "Le Khanh Duy";
    course1.courseName = "Object Oriented Programming";
    course1.courseCode = "CS202";
    course1.credits = 4;

    course1.displayInfo();

    if (course1.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    } else {
        cout << "This is not a high credit course." << endl;
    }
    if (course1.isLabRequired()) {
        cout << "Require the lab" << endl;
    }
    else cout << "Don't require lab" << endl;
    return 0;
}
