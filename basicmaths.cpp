#include <iostream>
#include <vector>
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
    cout << "Enter a number: ";
    int number;
    cin >> number;

    // Store the number in a temporary variable for further processing
    int temp = number;

    // Vector to store the digits that evenly divide the number
    vector<int> divisors;

    // Loop through each digit of the number
    while (temp != 0)
    {
        // Extract the last digit
        int digit = temp % 10;

        // Check if the digit is not zero and divides the number evenly
        if (digit != 0 && number % digit == 0)
        {
            // Add the digit to the vector
            divisors.push_back(digit);
        }

        // Move to the next digit
        temp /= 10;
    }

    // Output the count of digits that evenly divide the number
    cout << number << ": " << divisors.size() << endl;
    return 0;
}
