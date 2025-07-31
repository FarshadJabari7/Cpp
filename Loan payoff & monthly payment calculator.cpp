/*
Project: Loan Payoff & Monthly Payment Calculator

Description:
This program calculates the total payoff amount and monthly payment
based on user input:
  - np: principal loan amount
  - r: monthly interest rate
  - n: number of months

It uses the formula:
  pr = (np * r * n) / 12
  lp = np + pr
  nm = lp / n

The program runs in a loop until the user chooses to exit.
*/



#include <iostream>

using namespace std;

int main()
{ float np,lp,r,pr,n,nm;
  char ch = 'y';
  while(ch == 'y'){
    cout<<"Enter np,r,n:";
    cin>>np>>r>>n;
    pr=(np*r*n)/12;
    lp=np+pr;
    nm=lp/n;
    cout<<"\n"<<lp<<"   "<<nm<<"\n";
    cout<<"\n"<<"Do you wanna to continiu:";
    cin>>ch;
  }
        cin.ignore();
        cin.get();
return 0;
}
