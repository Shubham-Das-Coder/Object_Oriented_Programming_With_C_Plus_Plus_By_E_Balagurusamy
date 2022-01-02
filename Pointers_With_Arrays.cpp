#include <iostream>

using namespace std;

int main()
{
    int numbers[50], *ptr;
    int n, i;
    cout << "Enter the count\n";
    cin >> n;
    cout << "Enter the numbers one by one\n";
    for (i = 0; i < n; i++)
        cin >> numbers[i];
    ptr = numbers;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (*ptr % 2 == 0)
        {
            sum = sum + *ptr;
        }
        ptr++;
    }
    cout << "Sum of even numbers: " << sum;
}