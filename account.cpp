#include<iostream>
#include<cmath>
using namespace std;
class Account {
    public:
    string accountNumber;
    double balance;
    string ownerName;
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
    Account acc1;
    acc1.accountNumber = "123456789";
    acc1.ownerName = "Le Khanh Duy";
    acc1.balance = 1000.0;
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