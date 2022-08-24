#include<iostream>
using namespace std;
//THIS IS BIT MANIPULATION *VERY IMP FOR INTERVIEW PURPOSE*
/* Bitwise operators:
 1. &(And) operator - performs and func     0100 &  1101 =0100
 2. |(Or) operator- 1 +1=1   1+0=1   0+0=0
 3. ^(XOR) operator  
 4. ~ operator - this gives ones complement
 5. << operator- shifts the bit left side Eg:(0100)4<<1=1000  shifts the bit of 4 by 1  place in left
 6.  >>operator- 2>>4(0100)=0001                                 
*/
int getbit(int n,int i) // to get the bit at 2nd index of n
{
    if ((n&(1<<i))!=0)
    return 1;
    return 0;
}
int setbit(int n,int i)// to covert 0 to 1 at the ith index
{
    
        return (n|(1<<i));
    
}
int clearbit(int n,int i)// to convert 1 to 0
{
    return n&(~(1<<i));
}
int updatebit(int n,int i)// to update bit...in this example we have to update 0 to 1
{
    n=n&(~(1<<i));
    return (n|(1<<i));
}
int main()
{
    
    cout<<updatebit(5,1);
    return 0;
}