// Desimal to hexadecimal conversion 
#include<iostream>
using namespace std ;
void DisplayHex(int iNo)
{
    cout<<"Hexadecimal conversion is "<<"\n";
    int iDigit = 0;
    char Arr[]= {'A','B','C','D','E','F'};
    cout<<"0x";
    while (iNo != 0)
    {
       iDigit = iNo % 16;
       if(iDigit <= 9)
       {
        cout<<iDigit;
       }
       else
       {
           cout<<Arr[iDigit - 10];
       }
       iNo = iNo /16;
    }
    cout<<"\n";
}
int main()
{
    int iValue = 0;

    cout<<"Enter the number"<<"\n";
    cin>>iValue;

    DisplayHex(iValue);

    return 0;
}