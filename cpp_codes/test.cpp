#include<iostream>
using namespace std;
class BankAccount{
    private:
     int accountNumber;
     double balance;
 public:
 BankAccount(int accNum, double bal): accountNumber(accNum), balance(bal){}

void deposit(double amount){
    if (amount > 0){
        balance +=amount;
        cout<<"deposit successful"<<balance<<endl;

    }
    else{
        cout<<"invalid deposit"<<endl;
    }
}
 double getBalance(){ return balance;}

int main(){
    BankAccount accountNumber(1234,400.00):

}
}