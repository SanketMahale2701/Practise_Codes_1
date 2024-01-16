/* 
     Accept string from user enter full name on screen count the length of string
     Program : 350
*/

import java.util.Scanner;

public class Lb040723_07
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter your name : ");
       String name = sobj.nextLine();
    
       System.out.println("Your name is : "+name);
       System.out.println("Name of string is : "+name.length());
    }
}
