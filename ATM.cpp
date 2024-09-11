#include <bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;

void streams() {
    string c;
    ifstream file("ATM.txt");
    while(getline(file, c)) {
        cout<<c <<endl;
    }
}

void balance(double total,  int transaction, double remaining){
    cout<<"\n"<<"\t\t\t\t\t-----------------------" <<endl;
    cout<<"\t\t\t\t\t"<<"Total Amount is: " <<total <<endl;
    cout<<"\t\t\t\t\t"<<"Transaction Amount is: " <<transaction <<endl;
    cout<<"\t\t\t\t\t"<<"Remaining Amount is: " <<remaining <<endl;
    cout<<"\t\t\t\t\t-----------------------" <<endl;
}

int main() {
    double total_amount = 15544.9;
    int date = 0;
    double transaction_amount = 0;
    int my_pin;
    int pin = 2004;
    int options = 0;
    double remaining_amount = 0;
    streams();
    bool check;
    cout<<"Please Insert Your Card: " <<endl;
    cin >> check;
    if(check == true){
        cout<<"Enter Your Pin: ";
        cin >> my_pin;
        if(my_pin == pin) {
        int options;
        cout<<"PLease selct the options:" <<endl;
        cout<<"1. 500"<<endl;
        cout<<"2. 1000"<<endl;
        cout<<"3. 5000"<<endl;
        cout<<"4. 10000"<<endl;
        cout<<"5. 50000"<<endl;
        cin >>options;
        if(options == 1) {
            int opinion;
            cout<<"Are you sure!" <<endl;
            cin >>opinion;
            if(opinion == true) {
            total_amount -= 500;
            cout<<"You have withdrawn 500!" <<endl;
            }
            
        }
        else if(options == 2) {
            int opinion;
            cout<<"Are you sure!" <<endl;
            cin >>opinion;
            if(opinion == true) {
            total_amount -= 500;
            cout<<"You have withdrawn 500!" <<endl;
            }
        }
        else if(options == 3) {
            total_amount -= 5000;
        }
        else if(options == 4) {
            total_amount -= 10000;
        }
        else if(options == 5) {
            total_amount -= 50000;
        }

    }
    else {
        char forgot[3];
        cout<<"Wrong Pin!" <<endl;
        cout<<"Forgot Pin?" <<endl;
        cin >> forgot;
        if (forgot == "yes" || forgot == "Yes") {
            cout<<"To change Pin, please visit our bank manager!" <<endl;
        }
        cout<<"2 Try left!" <<endl;
        }
    }
    else if(check == false) {
    cout<<"Please to insert your card to proceed! " <<endl;
    }
    balance(total_amount, transaction_amount, remaining_amount);
}