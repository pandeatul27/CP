#include<iostream>
using namespace std;
//array stores data of similar type.
int l,L,S;
int A[10];//A is an array of size 10 i.e. to store 10 integers so  size of array in bytes is 4*10=40 bytes
class array
{

public:
array(){}
void findlargesmall()
{
    L=A[0];S=A[0];
     for (int i = 0; i < l; i++)
     {
        //  if(S>A[i])
        //  S=A[i];
        //  if(L<A[i])
        //  L=A[i];

        //better method
        L=max(L,A[i]);//max takes out the larger value
        S=min(S,A[i]);// min identifies the smaller value 
     }
     cout<<"the largest and the smallest elements are "<<L<<" and "<<S<<" respectively."<<endl;
}
};
int main()
{
   array ob;
    cout<<"enter the length of array"<<endl;
    cin>>l;
    cout<<"enter the array elements: "<<endl;
    for (int i = 0; i < l; i++)
    {
        cin>>A[i];
    }
    ob.findlargesmall(); 
}