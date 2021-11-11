#include <iostream>
#include <iomanip>

using namespace std;

bool is_leap(int year)
{
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0) || (year % 3200 == 0))
        return false;
    else
        return true;
}
int tomorrow(int day, int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
    {
        if (day == 31)
            return 1;
        else
            return day + 1;
    }
    else if (month == 2)
    {
        if (is_leap(year))
        {
            if (day == 29)
                return 1;
            else
                return day + 1;
        }
        else
        {
            if (day == 28)
                return 1;
            else
                return day + 1;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day == 30)
            return 1;
        else
            return day + 1;
    }
    else if (month == 12)
    {
        if (day == 31)
            return 0;
        else
            return day + 1;
    }
}

int main()
{
    int year, month, day;
    char m;
    cin >> year >> m >> month >> m >> day;
    if (tomorrow(day, month, year) == 0)
    {
        year++;
        month = 1;
        day = 1;
    }
    else if (tomorrow(day, month, year) == 1)
    {
        day = 1;
        month++;
    }
    else
        day++;

    cout << year << "-" << setfill('0') << setw(2) << month << "-" << setfill('0') << setw(2) << day << endl;

    return 0;
}
