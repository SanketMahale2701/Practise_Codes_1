/*
    Program 338
    accept number from user and return the sum of digits of that number
 */
import java.util.Scanner;

class Lb030723_13
{
    public static void main(String Args[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number :");
       int iNo = sobj.nextInt();

       digits dobj = new digits();

       int iRet = dobj.SumDigits(iNo);
       System.out.println("Sum of digits are :"+iRet);
    }
}
class digits
{
    int SumDigits(int iValue)
    {
        int iDigit = 0;
        int iSum = 0;

       while(iValue != 0)
       {
        iDigit = iValue % 10; 
        iSum = iSum + iDigit;
        iValue = iValue / 10;
       }
       return iSum;
    }
}