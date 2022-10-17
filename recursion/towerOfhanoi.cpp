#include<iostream>
using namespace std;
void towerOfhanoi(int n, char src, char dest, char hepler)
{
    if(n==0)
    {
        return;      //Base case
    }
    // Recursive case
    towerOfhanoi(n-1, src, hepler, dest);
    cout<<"Move from "<<src<<" To "<<dest<<endl;
    towerOfhanoi(n-1,hepler, dest, src);
}
int main()
{
int n;
cout<<"Enter the value of n :"<<endl;
cin>>n;
towerOfhanoi(n,'A','C','B');
cout<<endl;
    return 0;
}