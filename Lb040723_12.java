/* 
     Accept string from user and count the Capital charactors without using ascii value
     using charAt() method
     input : HeLLo WorlD
     output : 5
     Program : 355

*/

import java.util.Scanner;

public class Lb040723_12
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the string : ");
       String name = sobj.nextLine();
    
       System.out.println("Your name is : "+name);
       System.out.println("Name of string is : "+name.length());

       StringX obj = new StringX();
       int iRet = obj.CountCapital(name);
       System.out.println("Count of Capital numbers are : "+iRet);

    }
   }
   class StringX
   {
      int CountCapital(String str)
      {
         int iCount = 0;

         for(int iCnt = 0;iCnt < str.length();iCnt++)
         {
           if((str.charAt(iCnt) >= 'A')&&(str.charAt(iCnt) <= 'Z'))
           {
             iCount ++;
           }
         }
          return iCount;
      }

   }
