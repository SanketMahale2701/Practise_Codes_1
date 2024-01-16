/*Program 329
    accept number from user and return the factorial of that number
    Approch : 2 
 */
import java.util.Scanner;

public class Lb030723_05 
{
    static public int Factorial(int iValue)
    {
      int iMult = 1;
      for(int iCnt = 1;iCnt <= iValue;iCnt++)
      {
        iMult = iMult * iCnt;
      }
      return iMult;
    }
    public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the number :");
     int iNo = sobj.nextInt();
     
     int iRet = Factorial(iNo);
     System.out.println("Factorial is :"+iRet);
   }    
}
