//accept two numbers from user and calculate power unsing long 
//      4
// eg. 2 = 2 * 2 * 2 * 2
long int ChackPower (int iBase,int iPow)
{
    int iCnt = 0;
    long int iResult = 1;
   
    for(iCnt =1 ;iCnt <= iPow ; iCnt ++)
    {
        iResult = iResult * iBase ;
    }
    return iResult;
}
#include<stdio.h>
int main()
{
    int iNumber = 0;
    int iPower = 0;
    long iRet = 0;

    printf("Enter the base Number ;\n");
    scanf("%d",&iNumber);

    printf("Enter the Power ;\n");
    scanf("%d",&iPower);

    iRet = ChackPower(iNumber,iPower);

    printf("power of %d rais to %d is %d",iNumber,iPower,iRet);

    return 0; 
}
/*
result = 2 * 2 * 2 * 2 * 2

isum = 4 +2 + 2 +
iSum = 0
sum = isum + 

iResult = iResult * 
*/