#include <iostream>
using namespace std;
/*
void print1(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/
/*
void print2(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/
/*
void print3(int num)
{
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
*/
/*
void print4(int num)
{
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
*/
/*
void print5(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < num - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/
/*
void print6(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
*/
/*
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
*/
/*
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
*/
/*
void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
*/
/*
void print10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/
/*
void print11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
*/
/*
void print12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
*/
/*
void print13(int n)
{
    int k = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k = k + 1;
        }
        cout << endl;
    }
}
*/
/*
void print14(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
*/
/*
void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
*/
/*
void print16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
                }
        cout << endl;
    }
}
*/
/*
void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
*/
/*
void print18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
*/
/*
void print19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i * 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print191(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/
/*
void print20(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int space = 2 * n - 2 * i;
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        if (i > n)
        {
            space = 2 * i - 2 * n;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/
/*
void print21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == n - 1 || j == 0 || i == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
*/
/*
void print22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}
*/
int main()
{
    // print1(10);
    // print2(7);
    // print3(6);
    // print4(5);
    // print5(5);
    // print6(5);
    // print7(5);
    // print8(5);
    //  print9(5);
    // print10(5);
    // print10(5);
    // print11(5);
    // print12(5);
    // print13(5);
    // print14(5);
    // print15(5);
    // print16(5);
    // print17(5);
    // print18(5);
    // print19(5);
    // print191(5);
    // print20(5);
    // print21(4);
    // print22(4);
    return 0;
}