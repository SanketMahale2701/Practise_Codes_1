// Chack wether the number is prime number are not
#include<stdio.h>
#include<stdbool.h>
bool ChackPrime(int iNo)
{
   int iCnt = 0;
   bool bFlag = true;
   for(iCnt = 2 ;iCnt <=(iNo/2);iCnt++)
   {
      if((iNo % iCnt)==0)
      {
        bFlag = false ;
        break;
      }
   }
   return bFlag;
}
int main()
{
    int iValue = 0;                       
    bool bRet = false;                    
                
    printf("Enter the number : \n");       
    scanf("%d",&iValue);

    bRet= ChackPrime(iValue);

    if (bRet == true)
    {
        printf("%d is a prime number",iValue);
    }
    else
    {
         printf("%d is a not a prime number",iValue);
    }

    return 0;
}