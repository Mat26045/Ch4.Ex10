#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    int year,
        month;

    cout << endl;
    cout << "Enter the month (1 - 12): "; cin >> month;
    cout << "Enter the year (up to 9000): "; cin >> year;

    cout << endl;
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days";
            break;

        case 2:
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                    cout << "29 days" << endl;
                else
                    cout << "28 days" << endl;
            }
            else if (year % 100 != 0)
            {
                if (year % 4 == 0)
                    cout << "29 days" << endl;
                else
                    cout << "28 days" << endl;
            }
            break;

        default:
            cout << "Invalid month. Rerun program. Try again." << endl;
        }
    }

    cout << endl;

    return 0;
}