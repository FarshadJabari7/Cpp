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
