
 /*
    Program 334
    Accept number from user and return the multiplication of even factors of thst number
    Approch 3
    Complexcity = N/2
*/

import java.util.Scanner;

public class Lb030723_10
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
      for(int iCnt = 2;iCnt <= iValue; iCnt = iCnt +2)
      {
        if((iValue % iCnt) == 0)
          {
            iMult = iMult * iCnt;
          }
     }  

     if(iMult == 1)
     {
        return 0;
     }
     else
     {
        return iMult;
     }
   }
}
