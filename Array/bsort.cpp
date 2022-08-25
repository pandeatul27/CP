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

  void  bubblesort(int A[])
  {
     for (int i = 0; i < n-1; i++)
     {
         for(int j=0;j<n-i-1;j++)
         {
             if(A[j]>A[j+1])
             {
                 int t=A[j];
                 A[j]=A[j+1];
                 A[j+1]=t;
             }
         }
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
    bubblesort(A);
    cout<<endl;
    print(A);
}