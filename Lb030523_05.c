//accept two numbers from user and calculate power using long and unsigned and add filter forn -ve numbers 
#include<stdio.h>

unsigned long int ChackPower (int iBase,int iPow)
{
    int iCnt = 0;
    unsigned long int iResult = 1;
    if((iBase < 0)||(iPow < 0))   // Filter
    {
        return 0;
    }
    for(iCnt =1 ;iCnt <= iPow ; iCnt ++)
    {
        iResult = iResult * iBase ;
    }
    return iResult;
}

int main()
{
    int iNumber = 0;
    int iPower = 0;
    unsigned long int iRet = 0;

    printf("Enter the base Number ;\n");
    scanf("%d",&iNumber);

    printf("Enter the Power ;\n");
    scanf("%d",&iPower);

    iRet = ChackPower(iNumber,iPower);

    printf("power of %d rais to %d = %d",iNumber,iPower,iRet);

    return 0; 
}
