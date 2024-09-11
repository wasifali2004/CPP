#include <iostream>
#include <string>
using namespace std;

class HeartRates {
private:
    string first;
    string last;
    int birth_day, birth_month, birth_year;
    int current_day, current_month, current_year;

public:
    HeartRates(string a, string b, int c, int d, int e) {
        first = a;
        last = b;
        birth_day = c;
        birth_month = d;
        birth_year = e;
    }

    void setFirstName(string a) {
        first = a;
    }

    string getFirstName() {
        return first;
    }

    void setLastName(string a) {
        last = a;
    }

    string getLastName() {
        return last;
    }

    void setBirthDay(int a) {
        birth_day = a;
    }

    int getBirthDay() {
        return birth_day;
    }

    void setBirthMonth(int a) {
        birth_month = a;
    }

    int getBirthMonth() {
        return birth_month;
    }

    void setBirthYear(int a) {
        birth_year = a;
    }

    int getBirthYear() {
        return birth_year;
    }

    int getAge() {
        cout << "Enter the current day: ";
        cin >> current_day;
        cout << "Enter the current month: ";
        cin >> current_month;
        cout << "Enter the current year: ";
        cin >> current_year;

        int age = current_year - birth_year;

        // Adjust age if birth date hasn't occurred yet this year
        if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
            age--;
        }

        return age;
    }

    int getMaximumHeartRate() {
        return 220 - getAge();
    }

    pair<int, int> getTargetHeartRate() {
        int maxHeartRate = getMaximumHeartRate();
        return make_pair(static_cast<int>(maxHeartRate * 0.5), static_cast<int>(maxHeartRate * 0.85));
    }
};

int main() {
    string firstName, lastName;
    int day, month, year;

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter birth day (DD): ";
    cin >> day;
    cout << "Enter birth month (MM): ";
    cin >> month;
    cout << "Enter birth year (YYYY): ";
    cin >> year;

    HeartRates person(firstName, lastName, day, month, year);

    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Last Name: " << person.getLastName() << endl;
    cout << "Date of Birth: " << person.getBirthDay() << "/" << person.getBirthMonth() << "/" << person.getBirthYear() << endl;

    int age = person.getAge();
    cout << "Age: " << age << " years" << endl;
    
    int maxHeartRate = person.getMaximumHeartRate();
    cout << "Maximum Heart Rate: " << maxHeartRate << " beats per minute" << endl;

    pair<int, int> targetHeartRate = person.getTargetHeartRate();
    cout << "Target Heart Rate Range: " << targetHeartRate.first << " - " << targetHeartRate.second << " beats per minute" << endl;

    return 0;
}
