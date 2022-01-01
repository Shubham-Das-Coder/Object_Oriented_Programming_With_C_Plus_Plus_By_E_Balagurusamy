#include <iostream>

using namespace std;

class complex
{
    float x; // Real part
    float y; // Imaginary part
public:
    complex() {}                    // Constructor 1
    complex(float real, float imag) // Constructor 2
    {
        x = real;
        y = imag;
    }
    complex operator+(complex);
    void display(void);
};

complex complex ::operator+(complex c)
{
    complex temp; // Temporary these are float additions
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

void complex ::display(void)
{
    cout << x << " + j" << y << "\n";
}

int main()
{
    complex C1, C2, C3;
    C1 = complex(2.5, 3.5); // Invokes constructor 1
    C2 = complex(1.6, 2.7); // Invokes constructor 2
    C3 = C1 + C2;

    cout << "C1 = ";
    C1.display();
    cout << "C2 = ";
    C2.display();
    cout << "C3 = ";
    C3.display();

    return 0;
}