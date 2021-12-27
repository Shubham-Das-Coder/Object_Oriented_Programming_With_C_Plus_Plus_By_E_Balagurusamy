#include <iostream>

using namespace std;

class complex
{
    float x, y;

public:
    complex() {}                    // Constructor no arg
    complex(float a) { x = y = a; } // Constructor one arg
    complex(float real, float imag) // Constructor two arg
    {
        x = real;
        y = imag;
    }

    friend complex sum(complex, complex);
    friend void show(complex);
};

complex sum(complex c1, complex c2) // Friend
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return (c3);
}

void show(complex c) // Friend
{
    cout << c.x << " + j" << c.y << "\n";
}

int main()
{
    complex A(2.7, 3.5); // Define and initialize
    complex B(1.6);      // Define and initialize
    complex C;           // Define

    C = sum(A, B); // sum() is a friend
    cout << "A = ";
    show(A);
    cout << "B = ";
    show(B);
    cout << "C = ";
    show(C);

    // Another way to give initial values (Second method)

    complex P, Q, R; // Define P, Q and R

    P = complex(2.5, 3.9); // Initialize P
    Q = complex(1.6, 2.5); // Initialize Q
    R = sum(P, Q);

    cout << "P = ";
    show(P);
    cout << "Q = ";
    show(Q);
    cout << "Q = ";
    show(R);

    return 0;
}