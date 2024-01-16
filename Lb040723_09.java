/* 
     Accept string from user and display the charactors on screen like these
     input : Hello 
     output : H
              e
              l
              l
              o
     Program : 352

     charAt() method and toCharArray() both 
*/

import java.util.Scanner;

public class Lb040723_09
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the string : ");
       String name = sobj.nextLine();
    
       System.out.println("Your name is : "+name);
       System.out.println("Name of string is : "+name.length());

       char str[] = name.toCharArray();

       for(int iCnt = 0;iCnt < name.length(  ) ;iCnt++)
       {
          System.out.println( str[iCnt]);  
       }
    }
}
