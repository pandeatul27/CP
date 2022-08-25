#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,vector<int>&a,vector<int>&b,int n,int m)
{
  v.clear();
  int i=0,j=0;
   while(i<n || j<m)
   {
    if(a[i]<b[j]) v.push_back(a[i++]);
    else if(a[i]>b[j]) v.push_back(b[j++]);
    else{
      v.push_back(b[j++]);
      v.push_back(a[i++]);
    }
   }
   for(int k=j;k<m;k++)
   {
    v.push_back(b[k]);
   }
   for(int k=i;k<n;k++)
   {
    v.push_back(a[k]);
   }
}

void sort(vector<int> &v,int n)
{
  if(n==1) return;
  vector<int> left,right;
  int m= (n-1)/2;
  for(int i=0;i<=m;i++)
  {
    left.push_back(v[i]);
  }
  for(int i=m+1;i<n;i++)
  {
    right.push_back(v[i]);
  }
sort(left,m+1);
sort(right,n-m-1);
merge(v,left,right,m+1,n-m-1);
}
int main()
{
int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++)
{
  int x;
  cin>>x;
  a.push_back(x);
}
sort(a,n);
for(int i=0;i<n;i++)
{
  cout<<a[i]<<" ";
}
return 0;
}