#include <iostream>

using namespace std;

class item
{
    int number; // Private by default
    float cost; // Private by default

public:
    void getdata(int a, float b); // Prototype declaration to be defined

    // Function defined inside class
    void putdata(void)
    {
        cout << "Number : " << number << "\n";
        cout << "Cost : " << cost << "\n";
    }
};

// Member function definition
void item::getdata(int a, float b) // Use membership label
{
    number = a; // Private variables
    cost = b;   // Directly used
}

// Main program
int main()
{
    item x; // Create object x

    cout << "\nObject x"
         << "\n";

    x.getdata(100, 299.95); // Call member function
    x.putdata();            // Call member function

    item y; // Create another object

    cout << "\nObject y"
         << "\n";

    y.getdata(200, 175.50);
    y.putdata();

    return 0;
}