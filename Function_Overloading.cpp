// Function volume() is overloaded three times

#include <iostream>

using namespace std;

// Declarations (Prototypes)
int volume(int);
double volume(double, int);
long volume(long, int, int);

int main()
{
    cout << volume(10) << "\n";
    cout << volume(2, 5, 8) << "\n";
    cout << volume(100L, 75, 15) << "\n";

    return 0;
}

// Function definitions
int volume(int s) // Cube
{
    return (s * s * s);
}

double volume(double r, int h) // Cylinder
{
    return (3.14519 * r * r * h);
}

long volume(long l, int b, int h) // Rectangular box
{
    return (l * b * h);
}