// Q Write a programe which calculates the factorial of a number without using recursion and add long and unsigned keyword for -ve values

// eg. input = 5 so  5 * 4 * 3 * 2 * 1 = 120 Output = 120

#include<stdio.h>
#include<stdbool.h>
unsigned long int Factorial(int iNo)
{    
   int iCnt = 0;
   unsigned long int iMul = 1;

   for(iCnt = iNo ;iCnt >= 1;iCnt-- )
   {
      iMul = iMul * iCnt; 
   }
   return iMul;
}
int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("factorial of is : %d\n",iRet);

    return 0;
}



