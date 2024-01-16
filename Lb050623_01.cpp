// accepy number from user and display it's corresponding binary

#include<iostream>
using namespace std ;
void DisplayBinary(int iNo)
{
    cout<<"Binary conversion is "<<"\n";
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo / 2 ;
    }
    cout<<"\n";
}
int main()
{
    int iValue = 0;

    cout<<"Enter the number"<<"\n";
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;
}