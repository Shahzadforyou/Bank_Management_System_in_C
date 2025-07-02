#include<iostream>
#include<string>
#include<vector>
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
    void Get_AccountNumber(){
        cout<<"Your account number is "<<account_number<<endl;
    }
    bool Verify_Pin(unsigned int entered_pin){
        bool flag = false;
        if (entered_pin == pin)
        {
            flag = true;
            return flag;
        }else{
            return flag;
        }
        
    }
};
class Customer:protected Account{
    protected:
    double customer_id = customer_id;
    string name;
    string address;
    unsigned int contact_info;
    vector <int> accounts;
    public:
    void Add_Accounts(){
        while (cin)
        {
            /* code */
        }
        
    }

};

int main(){
    return 0;
}