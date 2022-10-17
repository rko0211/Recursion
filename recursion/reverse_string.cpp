#include<iostream>
using namespace std;
void reverse(int ind, string s)
{
    if(s[ind]=='\0')
    {
        return ;  //Base case
    }
    reverse(ind+1,s);    //recursive case
    cout<<s[ind];
}
int main()
{
    string s="CM";
    reverse(0,s);
    cout<<endl;
    return 0;
}