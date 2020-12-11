#include<iostream>
using namespace std;

class Date {
    private:
        int day, month, year;
    public:
        Date(int m, int d, int y)
            :month(m), day(d), year(y) {}
        
        //overloading +=
        void operator +=(int daysToAdd) {
            day += daysToAdd;
        }

        //overloading -=
        void operator -=(int daysToSubstract) {
            day -= daysToSubstract;
        }

        void DisplayDate() {
            cout << month << "/" << day << "/" << year << endl;
        }
};

int main() {
    Date holiday(12, 25, 2016);
    cout << "Holiday is on: ";
    holiday.DisplayDate();

    cout << "holiday -= 19 gives: ";
    holiday -= 19;
    holiday.DisplayDate();

    cout << "holiday += 25 gives: ";
    holiday += 25;
    holiday.DisplayDate();

    return 0;
}