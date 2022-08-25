#include<bits/stdc++.h>
using namespace std;
#define cinarr(a,n) for(int i = 0; i < n; i++) cin >> a[i]; 
#define coutarr(a,n) for(int i = 0; i < n; i++) cout << a[i] <<" ";
#define in(x)  cin >> x ; 
#define p(x) cout << x <<endl ;
#define f(i,a,n) for(int i=a;i<n;i++)
#define f1(i,a,n) for(int i=n-1;i>=a;i--)
#define ll long long
#define YES cout << "Yes" <<endl ;
#define NO cout << "No" <<endl ;

int arrange(int a[],int l,int h)
{
    int pivot=l+(h-l+1)/2;
    int i=l;
    int j=h;
    while(i<j)
    {
    while(a[pivot]>=a[i]) i++;
    while(a[j]>a[pivot]) j--;
     
     if(i<j)
     {
        swap(a[i],a[j]);
     }
     else {
        swap(a[pivot],a[j]);
     }
    }
     return j;
}

void quick_sort(int a[],int l,int h)
{
    if(l<h)
    {
      int pivot=arrange(a,l,h);
      quick_sort(a,l,pivot-1);
      quick_sort(a,pivot+1,h);
    }
}

int main()
{
int n;
cin>>n;
int a[n];
cinarr(a,n);
srand(time(0));
quick_sort(a,0,n-1);
coutarr(a,n);
return 0;
}