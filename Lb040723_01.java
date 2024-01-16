
/*
    Program : 343
    Accept n number from user and display the elements of array on screen 
    Approch :- 1
 */
import java.util.*;

public class Lb040723_01 
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number of elements : ");
       int iSize = sobj.nextInt();
       
       int Arr[] = new int[iSize];
       int iCnt = 0;

       System.out.println("Enter the elements : ");
       for(iCnt = 0;iCnt < Arr.length;iCnt++)   // for(iCnt = 0;iCnt < iSize;iCnt++)
       {
         Arr[iCnt] = sobj.nextInt();
       }
       System.out.println("Elements of Array : ");
       for(iCnt = 0;iCnt < Arr.length;iCnt++)   // for(iCnt = 0;iCnt < iSize;iCnt++)
       {
         System.out.println(Arr[iCnt]);
       }

    }
}
