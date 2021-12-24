#include <iostream>

using namespace std;

class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount(void)
    {
        cout << "Count : ";
        cout << count << "\n";
    }
};

int item ::count;

int main()
{
    item a, b, c; // Count is initialized to zero

    a.getcount(); // Display count
    b.getcount();
    c.getcount();

    a.getdata(100); // Getting data into object a
    b.getdata(100); // Getting data into object b
    c.getdata(100); // Getting data into object c

    cout << "After reading data"
         << "\n";

    a.getcount(); // Display count
    b.getcount();
    c.getcount();

    return 0;
}