
/* 
     Accept string from user and skeep the white spaces and return the string
     input : Hello world india
     output : Helloworldindia
     Program : 362
      Approch : 3 (using readymade method)
*/

import java.util.Scanner;

public class Lb040723_19
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the string : ");
       String name = sobj.nextLine();

       StringX obj = new StringX();
       String sRet = obj.RemoveWhiteSpace(name); //-------------------------

       System.out.println("Result is : "+sRet);
    }
}
class StringX
{
     public String RemoveWhiteSpace(String str)
     {
        return str.replaceAll("\\s","");
     }
}
