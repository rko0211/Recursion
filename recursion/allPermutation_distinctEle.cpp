#include<iostream>
#include<vector>
using namespace std;
void permuteString( string s, vector<char>&ds, vector<vector<char>>&ans, int n, int frq[])
{       
    // Base case
       if(ds.size()==n)
       {
        ans.push_back(ds);
        return;
       }
    //    Recursive case
 
    for(int i =0; i<n;i++)
    {
        if(!frq[i])
        {
            frq[i]=1;
            // Pick the element
            ds.push_back(s[i]);
            permuteString(s,ds,ans,n,frq);
            // Not pick the element;
             ds.pop_back();
            frq[i]=0;
           
        }
    }
}
int main()
{
    string s="ABC";
    int n = s.size();
    vector<char>ds;
    vector<vector<char>>ans;
    int frq[n]={0};
    permuteString(s,ds,ans,n,frq);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j];
        cout<<endl;
    }
    return 0;
}