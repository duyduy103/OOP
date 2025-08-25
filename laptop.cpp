#include <iostream>
using namespace std;
class Laptop {
    private:
    string brand;
    string model;
    int ram; 
    int storage; 
    int gpu;
    public:
    Laptop ( string br, string m, int r, int s, int g) : brand(br), model(m), ram(r), storage(s), gpu(g) {}
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    void checkRAM(int requiredRAM) {
        if (ram >= requiredRAM) {
            cout << "This laptop has enough RAM to run the software." << endl;
        } else {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
        }
    void checkGPU(int requiredGPU) {
        if( gpu >= requiredGPU) {
            cout << "This laptop has enough GPU to play the game" << endl;
        }
        else cout << "This laptop does not have enough GPU to play the game" << endl;
    }
    void upgradeRAM( int additionalRAM) {
       ram += additionalRAM;
       cout << "New Ram: " << ram << " GB" << endl;
    }
};
int main() {
    Laptop laptop1("Dell", "XPS 13", 8, 21 , 256);
    laptop1.displayInfo();
    laptop1.checkRAM(16);
    laptop1.checkGPU(20);
    laptop1.upgradeRAM(8);
 return 0;
}
