#include <iostream>
using namespace std;

/*
int change(int x) {
    int add = 1;
    int num = 0;
    do{
        int y = x % 10;
        num += y*add;
        add *= 8;
        x /= 10;
    }while(x>0);
    return num;
}
*/

/*
int hexadecimal_to_decimal(string y) {
   int add = 0;
   int z = 1;
   int check = y.size();
   for(int i = (check-1); i>=0; --i) {
    if(y[i] >= '0' && y[i] <= '9'){
        add += z * (y[i] - '0');
    }
    else if(y[i] >= 'A' && y[i] <= 'F') {
        add += z * (y[i] - 'A' + 10);
    }
        z*=16;  
    }
    
    return add;
}
*/

/*
int decimal_bin_to(int x) {
    int add = 0;
    int check;
    while(x<0) {
        if(x%2 == 0) {
            add +=0;
        }
        else if( x==0) {
            add +=1;
        }
        else {
            add +=1
        }
    }
}

*/


int decimal_to_binary(int y) {
    int add = 0;
    int power = 1;
    while(y > 0) {
        int parity = y%2;
        add += parity * power;
        power *= 10;
        y /= 2;
    }
    return add;
}



int main() {
    int a;
    cout<<"Enter a number to convert octal to hexa-decimal: ";
    cin >> a;
    cout<< decimal_to_binary(a);

}

