#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter values of a and b\n";
    cin >> a;
    cin >> b;
    int x = a - b;
    try
    {
        if (x != 0)
        {
            cout << "Results(a/x) = " << a / x << "\n";
        }
        else // There is an exception
        {
            throw(x); // Throws int object
        }
    }
    catch (int i) // Catches the exception
    {
        cout << "Exception caught : x = " << x << "\n";
    }
    cout << "END";
    return 0;
}