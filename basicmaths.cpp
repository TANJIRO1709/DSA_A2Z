#include <iostream>
using namespace std;

/*
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
*/
/*
int count(int n)
{
    int cn = (int)(log10(n) + 1);
    return cn;
}
*/
int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    // int x;
    // cin >> x;

    // cout << fibonacci(x);

    // Extraction of numbers
    /*
    int n;
    int cnt = 0;
    cin >> n;
    while (n > 0)
    {
        int last_digit = n % 10;
        cout << last_digit << endl;
        cnt++;
        n = n / 10;
    }
    cout << cnt << endl;
    int x = count(7789);
    cout << x;
*/
    int cnt = 0;
    int N;
    cin >> N;
    while (N > 0)
    {
        int last_digit = N % 10;
        if ((N / last_digit) % 2 == 0)
        {
            cnt += 1;
        }

        N = N / 10;
    }
    cout << cnt;
    return 0;
}
