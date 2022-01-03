// Creating files with constructor fuction

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outf("ITEM"); // Connect ITEM file to outf

    cout << "Enter item name : ";
    char name[30];
    cin >> name; // Get name from keyboard

    outf << name << "\n"; // Write to file ITEM
    cout << "Enter item cost : ";
    float cost;
    cin >> cost; // Get cost from keyboard

    outf << cost << "\n"; // Write to file ITEM

    outf.close(); // Disconnect ITEM file from outf

    ifstream inf("ITEM"); // Connect ITEM file to inf

    inf >> name; // Read name from file ITEM
    inf >> cost; // Read cost from file ITEM

    cout << "\n";
    cout << "Item name : " << name << "\n";
    cout << "Item cost : " << cost << "\n";

    inf.close(); // Disconnect ITEM from inf

    return 0;
}