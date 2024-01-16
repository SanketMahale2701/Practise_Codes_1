// Q Write a programe which calculates the factorial of a number without using recursion and add long and unsigned keyword for -ve values and use the typedef


#include<stdio.h>

typedef unsigned long int UNLONG;
UNLONG Factorial(int iNo)
{    
   int iCnt = 0;
   UNLONG iMul = 1;

   for(iCnt = iNo ;iCnt >= 1;iCnt-- )
   {
      iMul = iMul * iCnt; 
   }
   return iMul;
}
int main()
{
    int iValue = 0;
    UNLONG iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("factorial of is : %d\n",iRet);

    return 0;
}



