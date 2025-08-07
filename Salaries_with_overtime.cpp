// ==================================================================
// Program: salaries_with_overtime.cpp
// Description: Calculates salaries for employees. Base salary is $600,
//              and each hour worked beyond 40 earns an extra $20.
//              The program supports multiple employees and repeats
//              until the user chooses to stop.
// ==================================================================


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, n, t, s, ti;
    char ch = 'y';

    cout << "Base salary is $600" << "\n";

    while (ch == 'y') {
        cout << "How many people are? ";
        cin >> n;
        vector<int> g(n);

        for (i = 0; i < n; i++) {
            cout << "Enter hours worked for person " << (i + 1) << ": ";
            cin >> t;
            g[i] = t;
        }

        for (i = 0; i < n; i++) {
            if (g[i] > 40) {
                ti = g[i] - 40;
                s = 600 + (ti * 20);
            } else {
                s = 600;
            }
            cout << "Salary of person " << (i + 1) << " is $" << s << "\n";
        }

        cout << "\nDo you want to continue (y/n)? ";
        cin >> ch;
    }

    return 0;
}

}

