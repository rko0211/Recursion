#include<iostream>
using namespace std;
int friendspair(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }
    return friendspair(n-1) + friendspair(n-2)*(n-1);
}
int main()
{

// We have to calculate how many ways we can make their pair or leave them single  out of n fraiends
int n;
cin>>n;
cout<<friendspair(n)<<endl;
    return 0;
}