/*Program 328
    accept number from user and return the factorial of that number
    Approch : 1 
 */
import java.util.Scanner;

public class Lb030723_04 
{
    public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the number :");
     int iNo = sobj.nextInt();
     int iMult = 1;
     for(int iCnt = 1;iCnt <= iNo;iCnt++)
     {
        iMult = iMult * iCnt;
     }
     System.out.println("Factorial is :"+iMult);
   }    
}
