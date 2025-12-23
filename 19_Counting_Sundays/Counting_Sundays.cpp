#include <iostream>

using namespace std;

const unsigned int Sunday = 1;  // Sunday is represented by 1 in Zeller's formula

// Zeller's congruence: calculates the weekday of a given date
unsigned int getWeekday(unsigned long long year, unsigned int month, unsigned int day)
{
    // Adjust January and February to be counted as the 13th and 14th months of the previous year
    if (month <= 2)
    {
        month += 12;
        year--;
    }

    // Zeller's formula: returns 0 => Saturday, 1 => Sunday, ..., 6 => Friday
    return (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
}

int main()
{
    // Starting from 1 Jan 1901 (we know it's a Tuesday, so Day = 3)
    unsigned int startYear = 1901;
    unsigned int endYear = 2000;
    unsigned int startDay = 3;  // 1 Jan 1901 was a Tuesday

    int sum = 0;  // To count the Sundays that fall on the first of the month

    // Loop through the years from 1901 to 2000
    for (int y = startYear; y <= endYear; y++) {
        // Check the first day of each month
        for (int m = 1; m <= 12; m++) {
            // If the 1st of the month is a Sunday, count it
            if (getWeekday(y, m, 1) == Sunday) {
                sum++;
                cout << y << "-" << m << "-01 is a Sunday\n";  // Print when Sunday occurs
            }
        }
    }

    cout << "Total Sundays on the first of the month: " << sum << "\n";  // Final count
    return 0;
}

