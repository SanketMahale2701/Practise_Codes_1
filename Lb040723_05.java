
/*
    Program : 348
    Accept n number from user and return the Addition of all elements
    
 */
import java.util.*;

public class Lb040723_05
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

    }
}
class ArrayX
{
   protected int Arr[];

   public ArrayX(int iSize)
   {
       Arr = new int[iSize];
   }
   protected void Accept()
   {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the elements : ");
       for(int iCnt = 0;iCnt < Arr.length;iCnt++)
       {
         Arr[iCnt] = sobj.nextInt();
       }
   }
   protected void Display()
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
     super(iSize);    // ArratX()::
   }                  // Base member initialisation
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


/*
  Enthusiastic graduate with good knowledge in Coading and design
  Proficient in C, C++, Java, C#, Python HTML and Data Structure .
  Ability to learn new Software's and technologies quickly.
  Capability to work in turms by providing  valuable
  And currently i am also studying  system programming of linux and operating system of unix so it can be benefit me or our company in future
 */