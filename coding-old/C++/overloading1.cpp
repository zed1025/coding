#include<iostream>
using namespace std;

class Date {
    private:
        int day, month, year;
    public:
        Date(int inMonth, int inDay, int inYear)
            : month(inMonth), day(inDay), year(inYear) {}

        Date& operator ++() {   //prefix increment
            ++day;
            return *this;
        }

        Date& operator --() {   //prefix decrement;
            --day;
            return *this;
        }

        void DisplayDate() {
            cout << month << " / " << day << " / " << year << endl;
        }
};

int main() {
    Date holiday(12, 25, 2016);

    cout << "The data object is initialised to: ";
    holiday.DisplayDate();

    ++holiday;  //move date ahead by 1 day
    cout << "Date after prfix increment: ";
    holiday.DisplayDate();

    --holiday;
    cout << "Date after prefix decrement: ";
    holiday.DisplayDate();

    return 0;
}