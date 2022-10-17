#include<iostream>
#include<vector>
using namespace std;
void permute(int ind, vector<int>arr, vector<vector<int>>&ans, int n)
{
    // Base case
    if(ind==n)
    {
        ans.push_back(arr);
        return;
    }
    for(int i =ind; i<n;i++)
    {
        if(i!=ind && (arr[i]==arr[ind]))  continue;
        swap(arr[i],arr[ind]);
        permute(ind+1,arr,ans,n);
        swap(arr[i],arr[ind]);
    }

}
int main()
{
vector<int>arr={2,2,1,1};
    vector<vector<int>>ans;
    int n =arr.size();
    permute(0,arr,ans,n);
    for(auto v:ans)
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}