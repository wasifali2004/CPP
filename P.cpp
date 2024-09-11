#include <iostream>
using namespace std;

class Account{
       private:
       float account_balance;
       float add;
       float withdraw;
       public:
       Account(float current) {
        if(current >= 0) {
          account_balance = current;
        }
        else {
            account_balance = 0;
            cout<<"Initial balance was invalid!" <<endl;
        }
       }
       void credit() {
        cout<<"Add amount you want to add to your current balance: ";
        cin >> add;
        account_balance = account_balance + add;
       }
       void debit() {
         cout<<"Enter amount you to withdraw: ";
         cin >> withdraw;
         if(withdraw > account_balance) {
            account_balance = account_balance;
            cout<<"Debir amount exceeded account balance." <<endl;
         }
       }
        int current() {
            return account_balance;
         }
};

int main(){
    Account obj(4444.4);
    obj.credit();
    obj.debit();
    cout<<"Current Balance: "<<obj.current() <<endl;
    cout<<"-------------------------------" <<endl;
    Account obj2(-123.32);
    obj2.credit();
    obj2.debit();
    cout<<"Current Balance: "<<obj2.current() <<endl;
}