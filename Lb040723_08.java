/* 
     Accept string from user and display the charactors on screen like these
     input : Hello 
     output : H
              e
              l
              l
              o
     Program : 351
*/

import java.util.Scanner;

public class Lb040723_08
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the string : ");
       String name = sobj.nextLine();
    
       System.out.println("Your name is : "+name);
       System.out.println("Name of string is : "+name.length());

       for(int iCnt = 0;iCnt < name.length(  ) ;iCnt++)
       {
          System.out.println(name.charAt(iCnt));  
       }
    }
}
