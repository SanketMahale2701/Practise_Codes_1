/*Program
    accept number from user and return the factorial of that number
    Approch : 4
 */
import java.util.Scanner;
import Factorial.Numbers;

public class Lb030723_06_A
{
    public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the number :");
     int iNo = sobj.nextInt();
     
     Numbers nobj = new Numbers();

     int iRet = nobj.Factorial(iNo);
     System.out.println("Factorial is :"+iRet);
   }    
}