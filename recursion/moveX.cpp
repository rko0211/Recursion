#include<iostream>
using namespace std;
string moveX( string s)
{
// Base case 
if(s.size()==0)
return "";
// Recursive case;
char ch =s[0];
string rest = moveX(s.substr(1));
if(ch=='x')
return rest+ch;
return ch+rest;

}
int main()
{
    string s="axxbdxcefxhix";
    cout<<moveX(s);
    cout<<endl;
    return 0;
}