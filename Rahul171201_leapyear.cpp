#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the value of n: "<<"\n";
    cin>>n;
    if(n%4==0)
    {
      if(n%100==0)
      {
        if(n%400==0)
        {
          cout<<"Yes it is a leap year\n";
        }
        else
        cout<<"No its not a leap year\n";
      }
      else
      cout<<"Yes it is a leap year\n";
    }
    else
    cout<<"No it is not a leap year\n";
}
