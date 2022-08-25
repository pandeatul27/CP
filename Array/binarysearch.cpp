#include<iostream>
using namespace std;
int n;
int A[10];
class array
{

public:
array(){}
void binsearch(int x)
{
    int F = 0;
    int L = n-1 ;
    int m  = (F + L) / 2;;
    int f=0;
    while (F<=L)
    {
        m = (F + L) / 2;
        if (A[m] == x)
        {
            cout << "the required no. is at " << m + 1 << "th position" << endl;
            return;
        }
        else if (A[m] > x)
            L = m-1 ;
        else
            F = m+1 ;
    }
     cout << "not found";
    
}
};
int main()
{

    array ob;
    int x;
   
    cout<<"enter the length of array"<<endl;
    cin>>n;
    cout<<"enter the array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
     cout << "enter the no.: " << endl;
    cin >> x;
    ob.binsearch(x);
}
