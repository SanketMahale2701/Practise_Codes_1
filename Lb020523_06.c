/////////////////////////////////////////////////////////////////////////////////////////////////
//   what is the perfect number
//  -> perfect number manje aasa number ki jhyachya factor chi addition  is equal to toch number 
//  eg. 1 + 2 + 3 = 6   6 is a pperfect number
/////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement : Accept single number from user and Chack wether that number is perfect number or not
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithms

  START
       accept the number and store in iValue
       pass the input to ChackPerfect fuction
       Chackperfect functions accept that value in iNumber
       Create the iResult veriable inside the ChackPerfect for function call 
       create a veriable as iSum inside the function
       perform the addition of factor and return it
       Display the result o on screen
  STOP
*/
//////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
//////////////////////////////////////////////////////////////////////////////////////////
// Function name :ChackPerfect and  SumFactors
// Input         :Integer
// Output        :Boolean
// Description   :Display it's perfect or not
// Author        :Sanket shashikant mahale
// Date          :02/05/2023
//////////////////////////////////////////////////////////////////////////////////////////                   
//////////////////////////////////////////////////////////////////////////////////////////
int SumFactors(int iNo)                     
{         
   int iCnt = 0;
   int iSum = 0;

   if(iNo < 1)      // updator
   {
      iNo = -iNo;
   }

   for(iCnt = 1;iCnt <=(iNo/2);iCnt++)
   {
      if((iNo % iCnt)==0)
      {
        iSum = iSum + iCnt;
      }
   }    
    return iSum;                           
}
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
bool ChackPerfect(int iNumber)
{
    int iResult = 0;
    if(iNumber < 1)      // updator
    {
       iNumber = -iNumber;
    }

    iResult = SumFactors(iNumber);

    if(iResult == iNumber)
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
