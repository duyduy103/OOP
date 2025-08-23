#include<iostream>
#include<cmath>
using namespace std;
class Circle {
    public:
    double radius;
    string color;
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
        cout << "Màu sắc của hình tròn: " << color << endl;
    }
};
int main(){
    Circle circle1;
    cout <<"Nhập bán kính hình tròn: ";
    cin >> circle1.radius;
    cout <<"Nhập màu sắc hình tròn: ";
    cin >> circle1.color;
    if(!circle1.kiemtra()) {
        cout << "không hợp lệ" << endl;
        return 0;
    }
    else {
    cout << "Chu vi hình tròn: " << circle1.circumference() << " đơn vị" << endl;
    cout << "Diện tích hình tròn: " << circle1.area() << " đơn vị vuông" << endl;
    }
    circle1.mau();
    return 0;
}