#include<iostream>
using namespace std;
int tillingWay(int n)
{
// We have to return total number of ways by which we can place the item inside a box whose colum number is n
// Base case 
if(n==0)
return 0;
if(n==1)
return 1;
return tillingWay(n-1)+tillingWay(n-2);
// if we kept item in vertically + item in horizontally
}
int main()
{

int n ;
cin>>n;
cout<<tillingWay(n)<<endl;

    return 0;
}