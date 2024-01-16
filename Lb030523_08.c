// Q Write a programe which print 10 to 1
#include<stdio.h>
#include<stdbool.h>
void Displayb(int iNo)
{    
   int iCnt = 0;

   for(iCnt = iNo;iCnt >= 1;iCnt --)
   {
    printf("%d\t",iCnt);  
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
