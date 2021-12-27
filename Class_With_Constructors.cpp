#include <iostream>

using namespace std;

class integer
{
    int n, m;

public:
    integer(int, int); // Constructor declared

    void display(void)
    {
        cout << " m = " << m << "\n";
        cout << " n = " << n << "\n";
    }
};

integer ::integer(int x, int y) // Constructor defined
{
    m = x;
    n = y;
}

int main()
{
    integer int1(0, 100); // Constructor called implicitly

    integer int2 = integer(25, 75); // Constructor called explicitly

    cout << "\nOBJECT1"
         << "\n";
    int1.display();

    cout << "\nOBJECT2"
         << "\n";
    int2.display();

    return 0;
}