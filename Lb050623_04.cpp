// Desimal to hexadecimal conversion 
#include<iostream>
using namespace std ;

void DisplayHex(int iNo)
{
    cout<<"Hexadecimal conversion is "<<"\n";
    int iDigit = 0;
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
         switch(iDigit)
         {
         case 10:
            cout<<"A";
            break;
         case 11:
            cout<<"B";
            break;
         case 12:
            cout<<"C";
            break;
         case 13:
            cout<<"D";
            break;
         case 14:
            cout<<"E";
            break;         
         case 15:
            cout<<"F";
            break;   
         }
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