// ========================================================================
// Program: sum_of_digits_divisible_by_3.cpp
// Description: Loops through numbers from 111 to 333, computes the sum
//              of digits for each, and prints those sums that are divisible
//              by 3.
// ========================================================================


#include <iostream>
using namespace std;

int main()
{
    int i, r, n, s;

    for (i = 111; i <= 333; i++) {
        n = i;
        s = 0;  // Reset sum for each number

        while (n != 0) {
            r = n % 10;
            s += r;
            n = n / 10;
        }

        if (s % 3 == 0)
            cout << s << "\t";
    }

    return 0;
}

