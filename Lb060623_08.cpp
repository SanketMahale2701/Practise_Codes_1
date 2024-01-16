//Accept one number from user and off the seventh bit of the number without using if else 
// Program 249
// Program 244
#include<iostream>
using namespace std ;
typedef unsigned int UINT;

UINT Offbit( UINT iNo)
{
    UINT iMask = 0XFFFFFFBF;
    UINT iResult = 0;

    iResult = iNo & iMask;
    return iResult;   
}
int main()
{
    UINT iValue1 = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    cout<<"Enter the number"<<"\n";
    cin>>iValue1;

    iRet = Offbit(iValue1);

    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

/* 
 mask designing
  
  32 31 30 29   28 27 26 25   24 23 22 21   20 19 18 17   16 15 14 13  12 11 10 9    8  7  6  5    4  3  2  1
   1  1  1  1    1  1  1  1    1  1  1  1    1  1  1  1    1  1  1  1   1  1  1  1    1  0  1  1    1  1  1  1
       F              F             F             F             F            F             B             F
*/  