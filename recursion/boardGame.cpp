#include<iostream>
using namespace std;
int countPath(int st, int e)
{
// Base case 
if(st==e)
{
    return 1;
}
if(st>e)
{
    return 0;
}
// Recursive call
int ans=0;
// 
for(int i=1;i<=6;i++)
ans+=countPath(st+i,e);
return ans;
}
int main()
{
    cout<<countPath(0,3)<<endl;
 
    return 0;
}