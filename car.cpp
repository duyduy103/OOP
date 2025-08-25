#include<iostream>
using namespace std;
class Car {
    private:
    string brand;
    int year;
    public:
    Car(string b, int y) : brand(b) , year(y) {}
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};
int main(){
    Car car1("Toyota",2020);

    car1.displayInfo();
    return 0;
}