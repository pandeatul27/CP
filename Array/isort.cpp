#include<iostream>
using namespace std;
int n;
void print(int A[])
    {
        for (int i = 0; i < n; i++)
        {
            cout<<A[i]<<" ";
        }
        
    }
    void insertionsort(int A[])
    {
       for (int i = 1; i < n; i++)
       {
           int t=A[i];
           int j=i-1;
           while(A[j]>t && j>=0)
           {
               A[j+1]=A[j];
               j--;
           }
           A[j+1]=t;
       }
       
    }

int main()
{
cout<<"enter the length of array"<<endl;
    cin>>n;
    int A[n];
    cout<<"enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    print(A);
    insertionsort(A);
    cout<<endl;
    print(A);
}