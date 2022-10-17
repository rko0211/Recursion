#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsequns(int ind,string s,int n, vector<char>&ds, vector<vector<char>>&ans)
{
    // Base case
    if(ind==n)
    {
     ans.push_back(ds);
     return;
    }
    // recursive case
    // Pick or take the element
    ds.push_back(s[ind]);
    subsequns(ind+1,s,n,ds,ans);
    ds.pop_back();
    // Not pick or not take the element
    subsequns(ind+1,s,n,ds,ans);

}
int main()
{
    string s= "ABC";
    // if n is the length of the string then we can generate 2^n subsequence
   int n =s.size();
  vector<char>ds;
  vector<vector<char>>ans;
    subsequns(0,s,n,ds,ans);
//    Print all substrings
for(int i=0;i<ans.size();i++)
{
    for(int j=0;j<ans[i].size();j++)
    cout<<ans[i][j];
    cout<<endl;
}
}