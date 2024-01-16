/*
    Program 341
    accept number from user and chack wether number is amstrong number or not
    Approch : 1

    Input : 371
            3^3 + 7^3 + 1^3
            27  + 343 + 1
    Output : true  
 */
import java.util.Scanner;

class Lb030723_16
{
    public static void main(String Args[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number :");
       int iNo = sobj.nextInt();

       digits dobj = new digits();

       boolean bRet = dobj.ChackAmstrong(iNo);
       if(bRet == true)
       {
         System.out.println("Number is Amstrong number");
       }
       else
       {
         System.out.println("Number is not Amstrong number");
       }
    }
}
class digits
{
     boolean ChackAmstrong(int iNo)
    {
        int temp = iNo;
        
        // Count number of digits

        int iCount = 0;
        while(temp != 0)
        {
            iCount ++;
            temp = temp / 10;
        }
        
        temp = iNo;
        int iPower = 1;
        int iSum = 0;
        int iDigit = 0;
        
        // Logic to split the number
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            // Logic to calculate power
            for(int iCnt = 1;iCnt <= iCount;iCnt++)
            {
               iPower = iPower * iDigit;  
            }
            iSum = iSum + iPower;
            iPower = 1;
            iNo = iNo / 10;
        }
        if(iSum == temp)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}
