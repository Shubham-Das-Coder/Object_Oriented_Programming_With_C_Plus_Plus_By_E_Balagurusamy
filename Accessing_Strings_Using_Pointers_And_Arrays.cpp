#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[] = "Test";
    int len = strlen(str);
    int lenM, i;
    for (i = 0; i < len; i++)
    {
        cout << str[i] << i[str] << *(str + i) << *(i + str);
    }
    cout << endl;
    // String reverse
    lenM = len / 2;
    len--;
    for (i = 0; i < lenM; i++)
    {
        str[i] = str[i] + str[len - i];
        str[len - i] = str[i] - str[len - i];
        str[i] = str[i] - str[len - i];
    }
    cout << "The string reversed : " << str;
}