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

void f(int l, int a[], int n)
{
    if (l >= n / 2)
    {
        return;
    }
    swap(a[l], a[n - l - 1]);
    f(l + 1, a, n);
}
int main()
{
    // int n;
    // cin >> n;
    // cout << fn(n);
    //  f(n, 0);
    //   name(n, 1);
    int n = 5;
    int a[] = {1, 3, 6, 7, 9};
    f(0, a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }

    return 0;
}
