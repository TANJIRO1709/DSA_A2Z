#include <iostream>
using namespace std;

/*
void name(int n, int i)
{
    if (n < i)
    {
        return;
    }
    cout << n << endl;

    name(n - 1, i);
}
*/
/*
void f(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    f(i - 1, sum + i);
}
*/
voif fn(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + fn(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << fn(n);
    // f(n, 0);
    //  name(n, 1);
    return 0;
}
