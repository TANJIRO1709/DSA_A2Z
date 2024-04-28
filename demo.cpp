#include <iostream>
using namespace std;

int main()
{
    /*
    int x;
    cin >> x;
    cout << "Hey " << x << endl;
    */

    /*
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;
    */

    // int , long , long long , float , double , char , string , getline , char , bool

    /*
    string str;
    getline(cin, str);
    cout << str << endl;
    */

    /*
    bool x;
    cin >> x;
    cout << x << endl;
    */

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid day!";
    }

    return 0;
}
