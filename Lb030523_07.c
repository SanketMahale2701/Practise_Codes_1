// Q Write a programe which print 1 to 10
#include<stdio.h>
#include<stdbool.h>
Displayf(int iNo)
{    
   int iCnt = 0;

   for(iCnt = 1;iCnt <= iNo;iCnt ++)
   {
    printf("%d",iCnt);  
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
