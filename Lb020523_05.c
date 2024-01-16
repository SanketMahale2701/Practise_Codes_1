//Program5
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement : Accept single number from user and send a function and that function will display the sum of factors of that number and add the updator for negative
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithms

  START
       accept the number and store in iValue
       pass the input to fuction
       for passing the input from main to function we create iRet
       create a veriable as iSum inside the function
       perform the addition of factor
       Display the sum of factors on screen
  STOP
*/
//////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////
// Function name :SumFactors
// Input         :Integer
// Output        :Sum of Factors
// Description   :Display the sum factors
// Author        :Sanket shashikant mahale
// Date          :02/05/2023
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Entery point function
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the number :");
   scanf("%d",&iValue);

   iRet = SumFactors(iValue);
   
   printf("addition of factors : %d\n",iRet);
    return 0;
}
// Time complexity : (N/2)
// Where N is the input (Nartural Number)
