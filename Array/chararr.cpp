#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    //cin>>a;
    //cout<<a;
// int i=0;                  
// while(a[i]!='\0')
// {
//     cout<<a[i]<<"\n";
//     i++;
// }

//to find palindrome
// for(int i=0;i<n;i++)
// {
//     if(a[i]!=a[n-1-i])
//     {
//         cout<<"no";
//         return 0;
//     }
// }
// cout<<"yes";

//to find the word in a sentence having max length.
cin.getline(a,n);// to get a line in array
cin.ignore();
int maxlen=0;
int curlen=0;
int i=0;
while(1)
{
    if(a[i]==' ' || a[i]=='\0') //'\0' means space
    {
        if(curlen>maxlen)
       { maxlen=curlen;}
              
        curlen=0;
        
    }
    else
    {curlen++;

    }
    if(a[i]=='\0')
    {
    break;}
    i++;
}
cout<<maxlen;
    return 0;
}