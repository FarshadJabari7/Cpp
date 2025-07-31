#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    if(n == 1)cout<<"Farvardin";
    if(n == 2)cout<<"Ordibehesht";
    if(n == 3)cout<<"Khordad";
    if(n == 4)cout<<"Tir";
    if(n == 5)cout<<"Mordad";
    if(n == 6)cout<<"Shahrivar";
    if(n == 7)cout<<"Mehr";
    if(n == 8)cout<<"Aban";
    if(n == 9)cout<<"Azar";
    if(n == 10)cout<<"Day";
    if(n == 11)cout<<"Bahman";
    if(n == 12 )cout<<"Esfand";
    if(n>12)cout<<"Wrong number";
    cin.ignore();
    cin.get();
    return 0;
}
