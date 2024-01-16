/*
    Program 332
    Accept number from user and return the multiplication of even factors of thst number
    Approch 2
    Complexcity = N
*/

import java.util.Scanner;

public class Lb030723_08 
{
    public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the number :");
     int iNo = sobj.nextInt();
     
     Numbers nobj = new Numbers();

     int iRet = nobj.EvenFactorial(iNo);
     System.out.println("Factorial is :"+iRet);
   }    
}
class Numbers
{
    public int EvenFactorial(int iValue)
    {
      int iMult = 1;
      for(int iCnt = 1;iCnt <= iValue;iCnt++)
      {
        if(((iValue % iCnt) == 0)&&((iCnt % 2) == 0))
          {
            iMult = iMult * iCnt;
          }
     }  
      return iMult;
   }
}
