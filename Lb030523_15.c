// Q Write a programe which print 10 to 1 using while
#include<stdio.h>

void Displayb(int iNo)
{    
   int iCnt = iNo;

   while(iCnt >= 1)
   {
      printf("%d\t",iCnt);  
      iCnt--;
   }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Displayb(iValue);

    return 0;
}
