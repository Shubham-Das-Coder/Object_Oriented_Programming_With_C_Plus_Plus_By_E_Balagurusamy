#include <iostream>

using namespace std;

int main()
{
    int num[] = {56, 75, 22, 18, 90};
    int *ptr;
    int i;
    cout << "The array values are :\n";
    for (i = 0; i < 5; i++)
    {
        cout << num[i] << "\n";
    }
    ptr = num;
    cout << "Value of ptr : " << *ptr;
    cout << "\n";
    ptr++;
    cout << "Value of ptr++ : " << *ptr;
    cout << "\n";
    ptr--;
    cout << "Value of ptr-- : " << *ptr;
    cout << "\n";
    ptr = ptr + 2;
    cout << "Value of ptr2 : " << *ptr;
    cout << "\n";
    ptr = ptr - 1;
    cout << "Value of ptr-1 : " << *ptr;
    cout << "\n";
    ptr += 3;
    cout << "Value of ptr+=3 : " << *ptr;
    ptr -= 2;
    cout << "\n";
    cout << "Value of ptr-=2 : " << *ptr;
    cout << "\n";
}