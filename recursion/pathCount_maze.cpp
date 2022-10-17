#include<iostream>
using namespace std;\
int countPathinMaze(int n, int i, int j)
{
// We have to count total number of that we have to go from starting possition to end possition
// Base case
if(i==n-1 && j==n-1)
{
    return 1;
}
if(i>=n || j>=n)
{
    return 0;
}
// IN maze we can move along X-direction as well as in Y-direction
return countPathinMaze(n,i+1,j)+countPathinMaze(n,i,j+1);
}
int main()
{
 
cout<<countPathinMaze(4,0,0)<<endl;           //4 X 4 ---> Maze it is
    return 0;
}