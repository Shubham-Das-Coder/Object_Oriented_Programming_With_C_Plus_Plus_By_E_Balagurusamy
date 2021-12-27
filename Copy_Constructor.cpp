#include <iostream>

using namespace std;

class code
{
    int id;

public:
    code() {}               // Constructor
    code(int a) { id = a; } // Constructor again
    code(code &x)           // Copy constructor
    {
        id = x.id; // Copy in the value
    }
    void display(void)
    {
        cout << id;
    }
};

int main()
{
    code A(100); // Object A is created and initialized
    code B(A);   // Copy constructor called
    code C = A;  // Copy constructor called again

    code D; // D is created, not initialized
    D = A;  // Copy constructor not called

    cout << "\nid of A : ";
    A.display();
    cout << "\nid of B : ";
    B.display();
    cout << "\nid of C : ";
    C.display();
    cout << "\nid of D : ";
    D.display();

    return 0;
}