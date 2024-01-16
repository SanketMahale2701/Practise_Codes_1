
/*
    Program : 347
    Accept n number from user and return the Addition of all elements
    
 */
import java.util.*;

public class Lb040723_04
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number of elements : ");
       int iSize = sobj.nextInt();
       
       MyArray mobj = new MyArray(iSize);
       mobj.Accept(); 
       mobj.Display();
       int iRet = mobj.Summation();
       System.out.println("Summation of all elements is :"+iRet);
       
       // garbage collector wake up here and deallocate the memory
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
       System.out.println(" ");
   }
}
class MyArray extends ArrayX
{
   public MyArray(int iSize)
   {
     super(iSize);
   } 
   int Summation()
   {
      int iSum = 0;
      for(int iCnt = 0;iCnt < Arr.length;iCnt++)
      {
         iSum = iSum + Arr[iCnt];
      }
      return iSum;
   }
}


