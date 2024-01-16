//Accept one number from user and toggle seventh the bit of the number 
// Program 246
#include<iostream>
using namespace std ;
typedef unsigned int UINT;
UINT Togglebit( UINT iNo)
{
    UINT iMask = 0X00000040;
    return ( iNo ^ iMask );
}
int main()
{
    UINT iValue1 = 0;
    UINT iRet = 0;

    cout<<"Enter the number"<<"\n";
    cin>>iValue1;

    iRet = Togglebit(iValue1);

    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

/*   
 32 31 30 29   28 27 26 25   24 23 22 21   20 19 18 17   16 15 14 13   12 11 10 9   8  7  6  5    4  3  2  1
----------------------------------------------------------------------------------------------------------------------
 0  0  0  0    0  0  0  0    0  0  0  0    0  0  0  0    0  0  0  0    0  0  0  0   0  1  0  0    0  0  0  0
----------------------------------------------------------------------------------------------------------------------
     0              0            0              0            0              0            4             0     
iMask = 0X00000040

iPos = 7

    iNo        0   0   1   1   0   1   0   0 
               0   1   0   0   0   0   0   0        ^
-----------------------------------------------------
               0   0   1   1   0   1   0   0

*/