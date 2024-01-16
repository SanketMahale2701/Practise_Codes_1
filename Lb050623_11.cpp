// Accept number from user and chackwether eleventhth bit of that number is on or off
// Program 236
#include<iostream>
using namespace std ;
typedef unsigned int UINT;
bool Chkbit( UINT iNo)
{
    UINT iMask = 0x400;      // 0 1 0 0   0 0 0 0    0 0 0 0  , 0100 0000 = 400 
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
        cout<<"eleventh bit is on"<<"\n";
    }
    else
    {
        cout<<"eleventh bit is off"<<"\n";
    }
    return 0;
}