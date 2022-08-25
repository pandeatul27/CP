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
    void selectionsort(int A[])
    {
        for (int i = 0; i < n-1; i++)
        {
            
            for (int j = n; j >i ; j--)
            {
                if(A[i]>A[j])
                {
                    int t=A[j];
                    A[j]=A[i];
                    A[i]=t;
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
    selectionsort(A);
    cout<<endl;
    print(A);

}