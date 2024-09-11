#include <iostream>
using namespace std;

int main() {
    int total_miles, parking_fees , toll_day;
    float average_miles ,   cost_gallon, individual_total;

    cout<<"Enter total miles driven per day: ";
    cin >> total_miles;
    cout<<"Enter cost per gallon: ";
    cin >> cost_gallon;
    cout<<"Enter average miles per gallon: ";
    cin >> average_miles;
    cout<<"Enter parking fees: ";
    cin >> parking_fees;
    cout<<"Enter Tolls per day: ";
    cin >>toll_day;
    cout<<"Enter total individuals in a car: ";
    cin >> individual_total;

    float total_fuel , total_car_pooling ,individual_cost;
    total_fuel = (total_miles/average_miles)*cost_gallon;
    cout<<"----------------------------------------" <<endl;
    total_car_pooling = total_fuel + parking_fees + toll_day;
    cout<<"Total car pooling is: " <<total_car_pooling <<endl;

    individual_cost = total_car_pooling / individual_total;
    cout<<"Cost on each individual is: "<<individual_cost <<endl;
    cout<<"----------------------------------------" <<endl;
    
}