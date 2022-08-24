#include<iostream>
using namespace std;

int getbit(int n)
{
    return n&1;
}
int numonebin(int n)//counts number of one in binary form of n
{
 int x=0;
 while(n)
 {
     n=n&(n-1);//no. of these steps till n becomes 0 is number of 1s.
     x++;
 }
return x;
}
void subsets(int a[],int n)//to form subsets
{
    for(int i=0;i<(1<<n);i++)//(1<<n)=2^n
    {
       for(int j=0;j<n;j++)
       {
        if(i&(1<<j))//logic of getbit ...if 1 at jth index then print the jth element of array
        cout<<a[j]<<" ";
       }
       cout<<"\n";
    }
}
int main()
{
    int n;
   // cin>>n;
    int ar[4]={1,2,3};
    // if(!(getbit(n)))
    // {cout<<"power of 2";
    // return 0;}
    // cout<<"not power of 2";
   // cout<<numonebin(n);
   subsets(ar,3);

    return 0;
}