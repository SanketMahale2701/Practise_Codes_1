// Accept number from user and chackwether third bit of that number is on or off
// Program 232
#include<iostream>
using namespace std ;

bool Chkbit( unsigned int iNo)
{
    unsigned int iMask = 4;      // 0 0 0 0    0 1 0 0  , 0100 = 4 in decimal 
    unsigned int iResult = 0;

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
    unsigned int iValue = 0;
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