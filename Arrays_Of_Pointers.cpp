#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    int i = 0;
    char *ptr[10] = {
        "books",
        "television",
        "computer",
        "sports"};
    char str[25];
    cout << "Enter your favourite leisure pursuit : ";
    cin >> str;
    for (i = 0; i < 4; i++)
    {
        if (!strcmp(str, ptr[i]))
        {
            cout << "Your favourite pursuit "
                 << " is available here" << endl;
            break;
        }
    }
    if (i == 4)
    {
        cout << "Your favourite "
             << " not available here" << endl;
    }
}