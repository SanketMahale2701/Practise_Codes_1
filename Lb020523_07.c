
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement : Accept single number from user and Chack wether that number is perfect number or not
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithms

  START
       accept the number and store in iValue
       pass the input to ChackPerfect fuction
       Chackperfect functions accept that value in iNumber
       create a veriable as iSum inside the function
       perform the addition of factor and chack it is perfect or not
       Display the result o on screen
  STOP
*/
//////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
//////////////////////////////////////////////////////////////////////////////////////////
// Function name :ChackPerfect
// Input         :Integer
// Output        :Boolean
// Description   :Display it's perfect or not
// Author        :Sanket shashikant mahale
// Date          :02/05/2023
//////////////////////////////////////////////////////////////////////////////////////////                   

//////////////////////////////////////////////////////////////////////////////////////////
bool ChackPerfect(int iNumber)
{
           
    int iCnt = 0;
    int iSum = 0;
    int iResult = 0;
   
    if(iNumber < 1)      // updator
    {
       iNumber = -iNumber;
    }


    for(iCnt = 1;iCnt <=(iNumber/2);iCnt++)
    {
      if((iNumber % iCnt)==0)
      {
        iSum = iSum + iCnt;
      }
    }       
    
    if(iNumber == iSum)
    {
        return true;
    }
    else 
    {
        return false;
    }
}            
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
// Entery point function
///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
   int iValue = 0;
   bool fRet = false ;

   printf("Enter the number :");
   scanf("%d",&iValue);

   fRet = ChackPerfect(iValue);
   
   if(fRet == true)
   {
      printf("%d is a perfect number \n",iValue);
   }
   else
   {
      printf("%d is not a perfect number \n",iValue);
   }
   
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////

// Time complexity : 0(N)
// Where N is the input (Nartural Number)
