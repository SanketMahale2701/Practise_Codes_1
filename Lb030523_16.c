// Q Write a programe which calculates the factorial of a number without using recursion  and using while loop

#include<stdio.h>
#include<stdbool.h>
int Factorial(int iNo)
{    
   int iCnt = 1;
   int iMul = 1;

   while(iCnt <= iNo)
   {
      iMul = iMul * iCnt;
      iCnt ++; 
   }
   return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("factorial of is : %d \n",iRet);

    return 0;
}



