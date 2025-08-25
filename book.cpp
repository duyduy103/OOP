#include<iostream>
using namespace std;
class Book {
    private:
    string title;
    string author;
    public:
    Book (string t, string a) : title(t), author(a) {}

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};
int main(){
    Book book1("C++ Programming","Bjarne Stroustrup");
    book1.displayInfo();
    return 0;
}