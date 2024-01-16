// Q Write a programe which print 1 to 10 using while loop
#include<stdio.h>

Displayf(int iNo)
{    
   int iCnt = 1;

   while(iCnt <= iNo)
   {
      printf("%d",iCnt);
      iCnt ++ ;  
   }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Displayf(iValue);

    return 0;
}
