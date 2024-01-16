
/*
    Program : 345
    Accept n number from user and display the elements of array on screen 
    Approch :- 2
 */
import java.util.*;

public class Lb040723_02 
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number of elements : ");
       int iSize = sobj.nextInt();
       
       ArrayX aobj = new ArrayX(iSize);
       aobj.Accept();
       aobj.Display();
    }
}
class ArrayX
{
   public int Arr[];

   public ArrayX(int iSize)
   {
       Arr = new int[iSize];
   }
   public void Accept()
   {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the elements : ");
       for(int iCnt = 0;iCnt < Arr.length;iCnt++)
       {
         Arr[iCnt] = sobj.nextInt();
       }
   }
   public void Display()
   {
       System.out.println("Elements of Array : ");
       for(int iCnt = 0;iCnt < Arr.length;iCnt++)
       {
         System.out.print(Arr[iCnt]+"\t");
       }
       System.out.println(" ");
   }
}

