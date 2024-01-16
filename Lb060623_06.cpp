//Accept one number from user and toggle seventh the bit of the number 
// Program 247
#include<iostream>
using namespace std ;
typedef unsigned int UINT;
UINT Togglebit( UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo ^ iMask ;
    
    return iResult;
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
