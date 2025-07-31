/*
Project: Triangular Number Pattern Generator

Description:
This program tries to print a number triangle pattern based on user input 'n'.
It begins with 1, and each new line increases in numbers printed.
The logic for updating values is incomplete, specifically:
  - 'c = c + ...' is unfinished
  - The pattern generated is not mathematically defined yet

This version appears to be a work in progress or a test of loop structure.
*/



#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter number of rows (n): ";
    cin >> n;

    for (i = 0; i < n; i++) {
        int val = 1;

        // Print leading spaces for alignment (optional)
        for (j = 0; j < n - i - 1; j++)
            cout << "  ";

        // Print values in the row
        for (j = 0; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / (j + 1); // Pascal's triangle logic
        }
        cout << endl;
    }

    return 0;
}

