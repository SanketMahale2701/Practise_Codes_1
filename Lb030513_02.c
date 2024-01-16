//Q. Accepet number from user and chack wether that number is prime or not

#include<stdio.h>
#include<stdbool.h>
bool ChackPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt =2;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            break;
        }
    }
    if(iCnt == (iNo/2) +1)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    int iValue = 0;
    bool bRet = false; 

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = ChackPrime(iValue);

    if(bRet == true)
    {
        printf("%d is the prime number",iValue);
    }
    else
    {
        printf("%d is the non-prime number",iValue);
    }
    return 0;
}