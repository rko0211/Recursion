#include<iostream>
using namespace std;
string removeDuplicate( string s)
{
// Base case 
if(s.size()==0)
return "";
// Recursive case;
char ch =s[0];
string rest = removeDuplicate(s.substr(1));
if(ch==rest[0])
return rest;
return ch+rest;

}
int main()
{
    string s="aaaaabbbbbeeeecddd";

    cout<<removeDuplicate(s);
    cout<<endl;
    return 0;
}

/* This method is applicable when duplicate elements are coming in adjacent */