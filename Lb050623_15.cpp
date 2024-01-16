/*
   Accept number from user as well as the position and which is used to chack
   N th is on or off
   N means position and that position accept from the user

 */  
// Program 241
#include<iostream>
using namespace std ;
typedef unsigned int UINT;
bool Chkbit( UINT iNo,UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    if ((iPos < 1 )||((iPos > 32 )))
    {
        cout<<"INVALID INPUT"<<"\n";
        return false;
    }

    iMask = iMask << (iPos - 1); 
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
    UINT iValue1 = 0;
    UINT iBit = 0;
    bool bRet = false;

    cout<<"Enter the number"<<"\n";
    cin>>iValue1;

    cout<<"Enter the bit Position range should be (1 to 32)"<<"\n";
    cin>>iBit;

    bRet = Chkbit(iValue1,iBit);

    if(bRet == true)
    {
        cout<<"Bit is on"<<"\n";
    }
    else
    {
       cout<<"Bit is off"<<"\n";
    }
    return 0;
}
