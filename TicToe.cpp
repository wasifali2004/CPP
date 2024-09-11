#include <iostream>
using namespace std;

char check [10] = {'0','1', '2', '3', '4', '5' ,'6' ,'7' ,'8', '9'};

int checkwin() {
    if(check[1] == check[2] && check[2] == check [3] ) {
        return 1;
    }
    if(check[4] == check[5] && check[5] == check [6] ) {
        return 1;
    } 
    if(check[7] == check[8] && check[8] == check [9] ) {
        return 1;
    } 
    if(check[1] == check[4] && check[4] == check [7] ) {
        return 1;
    }
    if(check[2] == check[5] && check[5] == check [8] ) {
        return 1;
    } 
    if(check[3] == check[6] && check[6] == check [9] ) {
        return 1;
    } 
    if(check[1] == check[5] && check[5] == check [9] ) {
        return 1;
    }
    if(check[3] == check[5] && check[5] == check [7] ) {
        return 1;
    }
    else if(check[1] != '1' && check[2] != '2' && check[3] != '3' && check[4] != '4' && check[5] != '5' && check[6] != '6' && check[7] != '7' && check[8] != 8 && check[9] != '9' ) {
        return 0;
    }
    else {
        return -1;
    }
}

void pattern() {
    system("cls");
    cout<<"\tWelcome To TIC TOE Game!" <<endl;
    cout<<"\tPlayer 1(X) ---- Player 2(O)\n" <<endl;
    cout<<"     |      |       " <<endl;
    cout<<" " <<check[1] <<"   |   " <<check[2] <<"  |   " <<check[3] <<endl;
    cout<<"_____|______|_____" <<endl;
    cout<<"     |      |     " <<endl;
    cout<<" " <<check[4] <<"   |   " <<check[5] <<"  |   " <<check [6] <<endl;
    cout<<"_____|______|_____" <<endl;
    cout<<"     |      |     " <<endl;
    cout<<" " <<check[7]<<"   |   " <<check[8] <<"  |   " <<check[9] <<endl;
    cout<<"     |      |       "<<endl;
}

int main() {
    int player = 1, i, choice;
    char mark;
    do {
        pattern();
        player= (player%2) ? 1:2;
        cout<<"Player: "<<player <<" Enter the number: ";
        cin>>choice;
        mark = (player == 1) ?'X' : 'O';
        if(choice == 1 && check[1] == '1') {
            check[1] = mark;
        }
        else if(choice == 2 && check[2] == '2') {
            check[2] = mark;
        }
        else if(choice == 3 && check[3] == '3') {
            check[3] = mark;
        }
        else if(choice == 4 && check[4] == '4') {
            check[4] = mark;
        }
        else if(choice == 5 && check[5] == '5') {
            check[5] = mark;
        }
        else if(choice == 6 && check[6] == '6') {
            check[6] = mark;
        }
        else if(choice == 7 && check[7] == '7') {
            check[7] = mark;
        }
        else if(choice == 8 && check[8] == '8') {
            check[8] = mark;
        }
        else if(choice == 9 && check[9] == '9') {
            check[9] = mark;
        }
        else {
            cout<<"Invalid Move!" <<endl;
            player--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();
        player++;
    }while( i== -1);
    pattern();
    if( i==1) {
        cout<<"Congratulation! Player " <<--player <<" you have won." <<endl;
    }
    else {
        cout<<"Game Draw!" <<endl; 
    }
}