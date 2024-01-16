// Desimal to hexadecimal conversion 
#include<iostream>
using namespace std ;
void DisplayHex(int iNo)
{
    cout<<"Hexadecimal conversion is "<<"\n";
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 16;
        cout<<iDigit;
        iNo = iNo / 16 ;
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