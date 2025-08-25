#include <iostream>
using namespace std;

class Course {
    private :
     string courseName;
    string courseCode;
    string instructorName;
    int credits;
public:
    Course ( string cn, string cc, string i, int cr) {
        courseName = cn;
        courseCode = cc;
        instructorName = i;
        credits = cr;
    }
    
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
    Course course1("Le Khanh Duy", "Object Oriented Programming", "CS202", 4);

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
