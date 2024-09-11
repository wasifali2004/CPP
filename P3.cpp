#include <iostream>
#include <string>
using namespace std;

class Starter {
private:
    string first_name, last_name;
    int date, month, year, current_year, age;
    float height, weight, BMI;
public:
    Starter(string a, string b, int c, int d, int e, float f, float g) {
        first_name = a;
        last_name = b;
        date = c;
        month = d;
        year = e;
        height = f;
        weight = g;
        age = 0; // Initialize age
        BMI = 0; // Initialize BMI
    }

    void first_set(string a) {
        first_name = a;
    }
    string first_get() {
        return first_name;
    }
    void last_set(string b) {
        last_name = b;
    }
    string last_get() {
        return last_name;
    }
    void date_set(int c) {
        date = c;
    }
    int date_get() {
        return date;
    }
    void month_set(int d) {
        month = d;
    }
    int month_get() {
        return month;
    }
    void year_set(int e) {
        year = e;
    }
    int year_get() {
        return year;
    }
    void height_set(float f) {
        height = f;
    }
    float height_get() {
        return height;
    }
    void weight_set(float g) {
        weight = g;
    }
    float weight_get() {
        return weight;
    }
    int user_Age() {
        cout << "Enter current year: ";
        cin >> current_year;
        age = current_year - year;
        return age;
    }
    int MaximumHeartRate() {
        return 220 - age;
    }
    float TargetHeartRate() {
        return 0.7 * MaximumHeartRate();
    }
    float BodyMass() {
        BMI = (weight * 703) / (height * height);
        return BMI;
    }
    void Check() {
        if (BMI <= 18.5) {
            cout << "Underweight." << endl;
        }
        else if (BMI > 18.5 && BMI <= 24.9) {
            cout << "Normal." << endl;
        }
        else if (BMI >= 25 && BMI <= 29.9) {
            cout << "Overweight." << endl;
        }
        else if (BMI >= 30) {
            cout << "Obese." << endl;
        }
    }
};

int main() {
    string first, last;
    int date, month, year;
    float height, weight;

    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;
    cout << "Enter date of birth (day): ";
    cin >> date;
    cout << "Enter month of birth: ";
    cin >> month;
    cout << "Enter year of birth: ";
    cin >> year;
    cout << "Enter your height (in inches): ";
    cin >> height;
    cout << "Enter your weight (in pounds): ";
    cin >> weight;

    Starter obj(first, last, date, month, year, height, weight);

    cout << "Name: " << obj.first_get() << " " << obj.last_get() << endl;
    cout << "Date of Birth: " << obj.date_get() << "/" << obj.month_get() << "/" << obj.year_get() << endl;
    cout << "Height: " << obj.height_get() << " inches" << endl;
    cout << "Weight: " << obj.weight_get() << " pounds" << endl;
    cout << "Age: " << obj.user_Age() << " years" << endl;
    cout << "Maximum Heart Rate: " << obj.MaximumHeartRate() << " bpm" << endl;
    cout << "Target Heart Rate: " << obj.TargetHeartRate() << " bpm" << endl;
    cout << "BMI: " << obj.BodyMass() << endl;
    obj.Check();

    return 0;
}
