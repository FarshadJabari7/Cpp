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
