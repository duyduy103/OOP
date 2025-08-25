#include<iostream>
#include<cmath>
using namespace std;
class Account {
    private:
    string accountNumber;
    double balance;
    string ownerName;
    public:
    Account (string ac, double ba, string ow) : accountNumber(ac), balance(ba), ownerName(ow) {}
    void deposit(double amount) {
       balance += amount;
       cout << "Deposit: " << amount << endl;
    }
    bool toithieu(double amount) {
        return amount >= 100;
    }
    void withdraw(double amount) {
        if( amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
        balance -= amount;
        if(toithieu(balance)) {
        cout << "Withdraw: " << amount << endl;
        }
        else {
            cout << "tai khoan phai giu lai it nhat 100" << endl; 
            balance += amount;
        }
    }
    }
    void displayBalance() {
        cout <<" Owner Name: " << ownerName << endl;
        cout <<"Current balance: " << balance << endl;
    }
    
};
int main(){
    Account acc1("123456789", 1000.0, "Le Khanh Duy" );
    acc1.displayBalance();
    acc1.deposit(500);
    acc1.displayBalance();
    acc1.withdraw(200);
    acc1.displayBalance();
    acc1.withdraw(1500); 
    acc1.displayBalance();
    acc1.withdraw(1290);
    acc1.displayBalance();
    return 0;
}