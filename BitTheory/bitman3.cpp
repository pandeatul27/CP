#include<iostream>
using namespace std;
int findunique(int a[],int n)
{
    // for(int i=0;i<n;i++)
    // {
    //     int f=0;
    //     for(int j=0;j<n;j++)
    //     {
    //         if(!(a[i]^a[j]))
    //         f++;
    //     }
    //     if(f==1)
    //     return a[i];

    // }
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^a[i];
    }
    return xorsum;
}
int main()
{
    int ar[7]={1,2,3,2,3,4,1};
cout<< findunique(ar,7);
    return 0;
}