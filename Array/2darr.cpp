#include<iostream>
using namespace std;




int main()
{int n,m;
cout<<"enter the row and columns: "<<endl;
cin>>n;
cin>>m;
    cout<<"enter the elements"<<endl;
    int arr[n][m];
    for(int ii=0;ii<n;ii++)
{
    for(int jj=0;jj<m;jj++)
    {
       cin>>arr[ii][jj];
    }}
    for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}

//to transpose a matrix
// int row=n,col=m;
// int br[col][row];
// for(int k=0;k<row;k++)
// {
//     for(int l=0;l<col;l++)
//     {
//         br[l][k]=arr[k][l];
//     }

// }
// 
//for (int r=0;r<col;r++)
// {
//     for(int s=0;s<row;s++)
//     {
//         cout<<br[r][s]<<" ";
    
//     }
//     cout<<"\n";
// }

//to multiply the matrix with it self
int b[n][m];
 for(int ik=0;ik<n;ik++)
{
    for(int jk=0;jk<m;jk++)
    {
        b[ik][jk]=0;
        for(int kk=0;kk<n;kk++)
        {
       {
           b[ik][jk]+=arr[ik][kk]*arr[kk][jk];
       }
    }

    }}
for (int r=0;r<n;r++)
{
    for(int s=0;s<m;s++)
    {
        cout<<b[r][s]<<" ";
    
    }
    cout<<"\n";
}

return 0;
}
