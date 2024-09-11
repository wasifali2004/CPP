#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout<<"Enter a palindrome string: ";
    cin >> s;
    int  count = 0;
    string  y = s;
    reverse(s.begin(), s.end());
    for(int i=0; i<s.length(); ++i) {
    if(s[i] == y[i] ){
        count++;
    }
    else {
        count--;
    }
}
    if(count == s.length()) {
        cout<<"Palindrome!" <<endl;
    }
    else {
        cout<<"No Solution!" <<endl;
    }
        cout<<s;
}

