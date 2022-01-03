// Create files with open() function

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout; // Create output stream

    fout.open("country"); // Connect "country" to it

    fout << "United States of America\n";
    fout << "United Kingdom\n";
    fout << "South Korea\n";

    fout.close(); // Disconnect "country"

    fout.open("capital"); // Connect "capital"

    fout << "Washington\n";
    fout << "London\n";
    fout << "Seoul\n";

    fout.close(); // Disconnect "capital"

    // Reading the files
    const int N = 80; // Size of line
    char line[N];

    ifstream fin; // Create input stream

    fin.open("country"); // Connect "country" to it

    cout << "Contents of country file\n";

    while (fin) // Check end-of-file
    {
        fin.getline(line, N); // Read a line
        cout << line;         // Display it
    }

    fin.close(); // Disconnect "country"

    fin.open("capital"); // Connect "capital"

    cout << "\nContents of capital file\n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line;
    }

    fin.close();

    return 0;
}