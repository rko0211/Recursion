#include<iostream>
using namespace std;
void replacepi(int ind, string s)
{
    // Base case
    if(s[ind]=='\0')
    {
        return;
    }
    // Recursive case
    if(s[ind]=='p' && s[ind+1]=='i')
    {
        cout<<"3.14";
        replacepi(ind+2,s);
        // As we are using ind variable thats why there is no need of "s.substr(i)" --->function
    }
    else{
        cout<<s[ind];
        replacepi(ind+1,s);
    }
}
int main()
{
// Replace all pi by 3.14 using recursion;
string s="pippxxppiixipi";
replacepi(0,s);
cout<<endl;
    return 0;
}