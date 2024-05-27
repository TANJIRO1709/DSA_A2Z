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
/*
int fn(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + fn(n - 1);
}
*/
/*
void f(int l, int a[], int n)
{
    if (l >= n / 2)
    {
        return;
    }
    swap(a[l], a[n - l - 1]);
    f(l + 1, a, n);
}
*/
// Checkin gor palindrome
/*
bool f(int i, string s, int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return f(i + 1, s, n);
}
*/
// FIBONACCHI NUMBER
/*
int f(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return f(n - 1) + f(n - 2);
}
*/
int main()
{
    // int n;
    // cin >> n;
    // cout << fn(n);
    //  f(n, 0);
    //   name(n, 1);
    // int n = 5;
    // int a[] = {1, 3, 6, 7, 9};
    // f(0, a, n);
    //  for (int i = 0; i < n; i++)
    //  {
    //      cout << a[i] << " " << endl;
    //  }
    // string s = "madakm";
    // int n = s.length();
    // cout << f(0, s, n);
    // cout << f(4);
    return 0;
}
