#include<iostream>
using namespace std;
int pickele=0;
int notpickele=0;
int knapsack(int wt[], int val[], int n, int w)
{
    // Base case 
if((w==0 || n==0))
{
    return 0;
}
if(wt[n-1]>w)
{
    return knapsack(wt,val,n-1,w);
    // When weight of the item is more than the capacity of knapsack ---> in that case we don't add the items in our knapsack
}
return max(knapsack(wt,val,n-1,w-wt[n-1])+val[n-1] ,knapsack(wt,val,n-1,w));

}
int main()
{
int n;
n=3;
int wt[3]={10,20,30};
int val[3]={100,50,150};
int w;
w=50;
cout<<knapsack(wt,val,n,w)<<endl;
    return 0;
}

/* Knapsack problem based on Greedy algorithm */
/* For each element we have two choice either we can include it or we don't include it */