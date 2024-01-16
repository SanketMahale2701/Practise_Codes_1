/* 
     Accept string from user and count the small charactors without using ascii value
     input : HeLLo WorlD
     output :  5
     Program : 353

     charAt() method and toCharArray() both 
*/

import java.util.Scanner;

public class Lb040723_10
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the string : ");
       String name = sobj.nextLine();
    
       System.out.println("Your name is : "+name);
       System.out.println("Name of string is : "+name.length());

       StringX obj = new StringX();
       int iRet = obj.CountSmall(name);
       System.out.println("Count of small numbers are : "+iRet);

    }
   }
   class StringX
   {
      int CountSmall(String str)
      {
         char Arr[] = str.toCharArray();
         int iCount = 0;

         for(int iCnt = 0;iCnt < Arr.length ;iCnt++)
         {
           if((Arr[iCnt] >= 'a')&&(Arr[iCnt] <= 'z'))
           {
             iCount ++;
           }
         }
          return iCount;
      }

   }
