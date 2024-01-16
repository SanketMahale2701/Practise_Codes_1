//Accept one number from user and accept two positions from user and chackwether thats positions are on or of
// Program 243
#include<iostream>
using namespace std ;
typedef unsigned int UINT;
bool Chkbit( UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x00000001;
    UINT iResult = 0;

    if ((iPos1 < 1 )||(iPos1 > 32 )||(iPos2 < 1 )||(iPos2 > 32 ))
    {
        cout<<"INVALID POSITION"<<"\n";
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1); 

    iResult = iNo & (iMask1 | iMask2);

    if(iResult == (iMask1 | iMask2))
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
    UINT iBit1 = 0;
    UINT iBit2 = 0;
    bool bRet = false;

    cout<<"Enter the number"<<"\n";
    cin>>iValue1;

    cout<<"Enter the frist bit Position range should be (1 to 32)"<<"\n";
    cin>>iBit1;

    cout<<"Enter the second bit Position range should be (1 to 32)"<<"\n";
    cin>>iBit2;

    bRet = Chkbit(iValue1,iBit1,iBit2);

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
