#include<iostream>
using namespace std;

class Date {
    private:
        int day, month, year;
    public:
        Date(int m, int d, int y):day(d), month(m), year(y){}

        //binary + operator
        Date operator +(int num_days) { //increments Date by num_days
            Date newDate(day+num_days, month, year);
            return newDate;
        }

        //overloading binary - operator
        Date operator -(int num_days) {
            Date newDate(day-num_days, month, year);
            return newDate;
        }

        void DisplayDate() {
            cout << month << " / " << day << " / " << year << endl;
        }
};

int main() {
    Date holiday(12,25,2016);
    cout << "Holiday on: ";
    holiday.DisplayDate();

    Date previousHoliday(holiday-19);
    previousHoliday.DisplayDate();

    Date nextHoliday(holiday+6);
    nextHoliday.DisplayDate();

    return 0;
}