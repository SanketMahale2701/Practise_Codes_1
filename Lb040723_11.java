/* 
     Accept string from user and count the Capital charactors without using ascii value
     using toCharArray() method
     input : HeLLo WorlD
     output : 5
     Program : 354

*/

import java.util.Scanner;

public class Lb040723_11
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
         char Arr[] = str.toCharArray();
         int iCount = 0;

         for(int iCnt = 0;iCnt < Arr.length ;iCnt++)
         {
           if((Arr[iCnt] >= 'A')&&(Arr[iCnt] <= 'Z'))
           {
             iCount ++;
           }
         }
          return iCount;
      }

   }
