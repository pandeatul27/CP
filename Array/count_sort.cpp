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
int main()
{
int n;
cin>>n;
int a[n];
cinarr(a,n);
int max_element=0;
f(i,0,n)
{
   max_element=max(max_element,a[i]);
}
int count_ele[max_element+1]{0};
f(i,0,n)
{
 count_ele[a[i]]+=1;
}
f(i,1,max_element+1)
{
   count_ele[i]+=count_ele[i-1];
}
int b[n];
f(i,0,n)
{
   count_ele[a[i]]--;
   b[count_ele[a[i]]]=a[i];
}
coutarr(b,n);
return 0;
}