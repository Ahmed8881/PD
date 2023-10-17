#include <iostream>

using namespace std;

int calculateVolleyballGames(string, int, int);

main()
{
    string yearType;
    int holidays, weekends;

    cout << "Enter year type: ";
    cin >> yearType;

    cout << "Enter number of holidays: ";
    cin >> holidays;

    cout << "Enter number of weekends: ";
    cin >> weekends;

    int result;
    result = calculateVolleyballGames(yearType, holidays, weekends);
    cout << result;
}

int calculateVolleyballGames(string yearType, int holidays, int weekends)
{
    int whole;
    int a;

    if (yearType == "leap")
    {
        holidays = holidays * 0.67;
        weekends = weekends * 0.75;
        whole = holidays + weekends;
        a = 48 - 48 * 0.15;
        a = a + whole + 1;
    }

    else
    {
        holidays = holidays * 0.67;
        weekends = weekends * 0.75;
        whole = holidays + weekends;
        a = 48 - 48 * 0.15;
        a = a + whole;
        a = a - a * 0.15;
        if (a >= 44)
            a += 2;
        a += 1;    
    }
    return a;
}