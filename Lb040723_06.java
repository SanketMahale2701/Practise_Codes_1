/* 
       Accept string from user enter full name on screen
      Program : 349
*/

import java.util.Scanner;

public class Lb040723_06 
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter your name : ");
       String name = sobj.nextLine();
       
        System.out.println("Your name is : "+name);

    }
}
