#include<iostream>
#include <sstream> // new include for ostringstream
#include<string>
using namespace std;

class Date {
    private:
        int day, month, year;
        string dateInString;
    public:
        Date(int inMonth, int inDay, int inYear)
            :day(inDay), month(inMonth), year(inYear) {}
        
        //conversion operator //ERROR
        operator const char*() {
            ostringstream formattedDate; // assists string construction
            formattedDate << month << " / " << day << " / " << year;
            dateInString = formattedDate.str();
            return dateInString.c_str();
        }


        //conversion operator
        explicit operator int() {
            return day+month+year;
        }
};

int main() {
    Date Holiday(12, 25, 2016);

    cout << "Holiday is on: " << Holiday << endl;

    //we can do this because of conversion operator int()
    int dateCount = (int)Holiday;

    //string strHoliday(Holiday); //OK
    //strHoliday = Date(11, 11, 2016); //also OK

    return 0;
}