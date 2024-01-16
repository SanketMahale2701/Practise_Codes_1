/* 
     Accept string from user and toggle the case(small to capital amd capital tp)
     input : hElLO wOrLD
     output : HELLO WORLD
     Program : 358

*/

import java.util.Scanner;

public class Lb040723_15
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the string : ");
       String name = sobj.nextLine();
    
       System.out.println("Your name is : "+name);
       System.out.println("Name of string is : "+name.length());

       StringX obj = new StringX();
       String sRet = obj.StrToggle(name); 
       System.out.println("Converted is : "+sRet);

    }
}
   class StringX
   {
    // step 1 : string to charactor array
     public String StrToggle(String str)
     {
       char Arr[] = str.toCharArray(); 
       // step 2 : perform operations on array
       for(int iCnt = 0;iCnt< Arr.length;iCnt++)
       {
        if((Arr[iCnt] >= 'a')&&(Arr[iCnt] <= 'z'))
        {
           Arr[iCnt] = (char)(Arr[iCnt] - 32); 
        }
        else if((Arr[iCnt] >= 'A')&&(Arr[iCnt] <= 'Z'))
        {
           Arr[iCnt] = (char)(Arr[iCnt] + 32); 
        }
        else
        {
            Arr[iCnt] = (Arr[iCnt]); 
        }
       } 
       // step3 : convert array to string
       String ret = new String(Arr);

       return ret;
     }  
   }
