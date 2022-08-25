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

void max_heapify(int a[],int n,int i)
{
   int l=2*i;
   int r=2*i+1;
   int largest=i;
   if(l<=n-1 && a[l]>a[largest]){
    largest=l;
   }
   if(r<=n-1 && a[r]>a[largest]){
    largest=r;
   }
   if(largest!=i){
    swap(a[i],a[largest]);
    max_heapify(a,n,largest);
   }
}

void build_heap(int a[],int n)
{
    f1(i,0,n/2+1)
    {
        max_heapify(a,n,i);
    }
}

void heap_sort(int a[],int n)
{
   build_heap(a,n);
   swap(a[0],a[n-1]);
   for(int i=n-1;i>=1;i--){
    max_heapify(a,i,0);
    swap(a[0],a[i-1]);
   }
}


void print(int a[],int n)
{
    coutarr(a,n);
}

int main()
{
int n;
cin>>n;
int a[n];
cinarr(a,n);
heap_sort(a,n);
print(a,n);
return 0;
}