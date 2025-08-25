#include <iostream>
using namespace std;

class Person {
    private:
    string name;
    int age;
    string address;
    string phoneNumber;
    public:
    Person(string n, int ag, string ad, string p) : name(n), age(ag), address(ad), phoneNumber(p) {}
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl; 
    }

    bool isAdult() {
        return age >= 18;
    }
    void move(string newAddress) {
        address = newAddress;
        cout << "New address: " << address << endl;
    }
    void greet() {
        cout << "Hello, my name is " << name << endl;
    }
};

int main() {
    Person person1 ("John Doe", 20, "123 Main St", "0123456789" );

    person1.displayInfo();

    if (person1.isAdult()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }
    person1.greet();
    person1.move("456 Main St");
    return 0;
}
