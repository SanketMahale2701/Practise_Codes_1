// Accept number from user and chackwether fourth bit or nineth of that number is on or off
// Program 238
#include<iostream>
using namespace std ;
typedef unsigned int UINT;
bool Chkbit( UINT iNo)
{
    UINT iMask = 0x00000108;     
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
        cout<<"fourth and nineth bit is on"<<"\n";
    }
    else
    {
        cout<<"fourthth and nineth bit is off"<<"\n";
    }
    return 0;
}
/*

   32 31 30 29   28 27 26 25   24 23 22 21   20 19 18 17   16 15 14 13   12 11 10 9   8  7  6  5    4  3  2  1
----------------------------------------------------------------------------------------------------------------------
   0  0  0  0    0  0  0  0    0  0  0  0    0  0  0  0    0  0  0  0    0  0  0  0   0  0  0  0    0  0  0  0
 

*/