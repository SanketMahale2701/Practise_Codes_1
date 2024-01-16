// Program 326
// Accept two numbers from user and perform the addition or display the addition

import java.util.*;

public class Lb030723_02 
{
   public static void main(String Arg [])
   {
     Scanner sobj = new Scanner(System.in);
    
     System.out.println("Enter the frist number :");
     int iNo1 = sobj.nextInt();

     System.out.println("Enter the Second number :");
     int iNo2 = sobj.nextInt();

     int iAns = 0;
     iAns = iNo1 + iNo2;
     
     System.out.println("Addition is :"+iAns);
     
   }
}
