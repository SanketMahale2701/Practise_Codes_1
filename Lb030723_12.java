/*
    Program 337
    accept number from user and count number of digits of that number
 */
import java.util.Scanner;

class Lb030723_12
{
    public static void main(String Args[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number :");
       int iNo = sobj.nextInt();

       digits dobj = new digits();

       int iRet = dobj.CountDigits(iNo);
       System.out.println("Number of digits are :"+iRet);
    }
}
class digits
{
    int CountDigits(int iValue)
    {
        int iCount = 0;

       while(iValue != 0)
       {
        iCount++;
        iValue = iValue / 10;
       }
       return iCount;
    }
}