#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}
int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int x;
    cin >> x;

    cout << fibonacci(x);
}
