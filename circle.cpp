#include<iostream>
#include<cmath>
using namespace std;
class Circle {
    private:
    double radius;
    string color;
    public:
    Circle (double r, string c)  {
        radius = r;
        color = c;
    }
    
    double circumference() {
      return 2 * M_PI * radius;
    }
    double area(){
        return M_PI * radius * radius;
    }
    bool kiemtra() {
        return radius > 0;
    }
    void mau() {
        cout << "Mau sac cua hinh tron: " << color << endl;
    }
};
int main(){
    double r;
    cout <<"Nhap ban kinh hinh tron: ";
    cin >> r;
    string c;
    cout <<"Nhap mau sac hinh tron: ";
    cin >> c;
    Circle circle1(r,c);
    if(!circle1.kiemtra()) {
        cout << "khong hop le" << endl;
        return 0;
    }
    else {
    cout << "Chu vi hinh tron: " << circle1.circumference() << " don vi" << endl;
    cout << "Dien tich hinh tron: " << circle1.area() << " don vi vuong" << endl;
    }
    circle1.mau();
    return 0;
}