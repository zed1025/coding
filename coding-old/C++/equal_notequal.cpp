#include<iostream>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        Date(int m, int d, int y)
            :month(m), day(d), year(y) {}
        
        bool operator ==(const Date& compareTo) {
            return ((day == compareTo.day) &&
                    (month == compareTo.month) &&
                    (year == compareTo.year));
        }

        bool operator !=(const Date& compareTo) {
            return !(this->operator==(compareTo));
        }

        void DisplayDate() {
            cout << month << "/" << day << "/" << year << endl;
        }
};

int main() {
    Date holiday1(12, 25, 2016);
    Date holiday2(12, 31, 2016);

    cout << "holiday1 is: ";
    holiday1.DisplayDate();
    cout << "holiday2 is: ";
    holiday2.DisplayDate();

    if(holiday1 == holiday2) {
        cout << "Same Days\n";
    } else {
        cout << "Different Days\n";
    }

    if(holiday1 != holiday2) {
        cout << "Not Equal\n";
    } else {
        cout << "equal\n";
    }

    return 0;
}