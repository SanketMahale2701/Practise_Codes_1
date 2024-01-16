// Accept number from user and chackwether third bit of that number is on or off
// Program 234
#include<iostream>
using namespace std ;
typedef unsigned int UINT;
bool Chkbit( UINT iNo)
{
    UINT iMask = 0x4;      // 0 0 0 0    0 1 0 0  , 0100 = 4 in decimal 
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true ;
    }
    else
    {
        return false ;
    } 
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number"<<"\n";
    cin>>iValue;

    bRet = Chkbit(iValue);

    if(bRet == true)
    {
        cout<<"third bit is on"<<"\n";
    }
    else
    {
        cout<<"third bit is off"<<"\n";
    }
    return 0;
}