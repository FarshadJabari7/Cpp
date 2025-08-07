// ===============================================================
// Program: count_chars_until_dot.cpp
// Description: This program reads characters from user input
//              and counts how many are entered before the first
//              period ('.') is found.
// Author: [Your Name]
// ===============================================================

#include <iostream>

using namespace std;

int main()
{
    int i=0;
    char ch='.';
    cout<<"Enter a sentence:";

    for( ;cin.get() != '.'; )
        i++;
    cout<<i;
    cin.ignore();
    cin.get();
    return 0;
}
