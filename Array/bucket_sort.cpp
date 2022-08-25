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
float a[n];
float max_element=0.0;
f(i,0,n)
{
    cin>>a[i];
    max_element=max(max_element,a[i]);
}
vector<float>v[(int)(max_element*n)+1];
f(i,0,n)
{
   v[(int)(a[i]*n)].push_back(a[i]);
}
f(i,0,(int)(max_element*n)+1)
{
   sort(v[i].begin(),v[i].end());
}
vector<float> ans;
f(i,0,(int)(max_element*n)+1)
{
    f(j,0,v[i].size())
    {
        ans.push_back(v[i][j]);
    }
}
f(i,0,n)
{
    cout<<ans[i]<<" ";
}
return 0;
}