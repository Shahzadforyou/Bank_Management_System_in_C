#include<iostream>
#include<string>
using namespace std;
class Account{
    protected:
    double account_number;
    unsigned int pin;
    double balance = 0;
    string account_type;
    double customer_id;
    public:
    void Deposit(double amount){
        balance+= amount;
    }
    void Withdraw(double amount){
        if (amount < balance)
        {
            cout<<"Insufficent Balance"<<endl;
        }else{
            balance -= amount;
        }
        
    }
    void Get_Balance(){
        cout<<"Your balance is "<<balance<<endl;
    }
    void Get_AccountNumber()

};

int main(){
    return 0;
}