
/* 
     Accept string from user and skeep the white spaces and return the string
     input : Hello world india
     output : Helloworldindia
     Program : 361
     
     Approch : 2
*/

import java.util.Scanner;

public class Lb040723_18
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the string : ");
       String name = sobj.nextLine();

       StringX obj = new StringX();
       String sRet = obj.RemoveWhiteSpace(name); 

       System.out.println("Result is : "+sRet);
    }
}
class StringX
{
     public String RemoveWhiteSpace(String str)
     {
        char Arr[] = str.toCharArray();            //iCnt = 0 1 2 3 4 5 6 7
        String Output = "";
      
        for(int iCnt = 0;iCnt < Arr.length;iCnt++)   //  7
        {
           if(Arr[iCnt] != ' ')
           {
            Output = Output + Arr[iCnt];  // 0 1 2 3 4
           }
        }
        return Output;
     }
}
