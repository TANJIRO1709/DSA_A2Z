#include <iostream>
using namespace std;

// Define the function with appropriate parameter types
void name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Hello World" << endl;

    name(i + 1, n);
}

int main()
{
    int n;
    cin >> n;   // Correct the syntax for reading input from the user
    name(1, n); // Call the function with the initial value of 1
    return 0;
}
