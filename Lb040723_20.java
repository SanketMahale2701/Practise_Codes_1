
/* 
     Accept string from user and reverse the data and return reverse string write our own logic
     output : Helloworldindia
     Program : 363

     method : .reverse()
*/

import java.util.Scanner;

public class Lb040723_20
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the string : ");
       String name = sobj.nextLine();

       StringX obj = new StringX();
       String sRet = obj.ReverseString(name); 

       System.out.println("Result is : "+sRet);
    }
}
class StringX
{
     public String ReverseString (String str)
     {
        char Arr[] = str.toCharArray();
        int iStart = 0;
        int iEnd = (Arr.length - 1);
        char Temp = ' ';

        while(iStart < iEnd)
        {
           Temp = Arr[iStart];
           Arr[iStart] = Arr[iEnd];
           Arr[iEnd] = Temp ;

           iStart++;
           iEnd--;
        }

        return new String(Arr);
     }
}
