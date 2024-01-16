
/*
    Program 342
    accept number from user and chack wether number is amstrong number or not
    Approch : 2

    Input : 371
            3^3 + 7^3 + 1^3
            27  + 343 + 1
    Output : true  
 */
import java.util.Scanner;

class Lb030723_17
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
    int CountDigits(int iNo)
    {
        int iCount = 0;
        while(iNo != 0)
        {
            iCount ++;
            iNo = iNo / 10;
        }
        return iCount;
    }
    int Power(int x,int y)
    {
       int iPower = 1;
       for(int iCnt = 1;iCnt <= y;iCnt++ )
       {
         iPower = iPower * x;
       }
       return iPower;
    }
    boolean ChackAmstrong(int iNo)
    {
       int iCount = CountDigits(iNo);
       int iDigit = 0;
       int iTemp = iNo;
       int iSum = 0;
       int iRet = 0;

       while(iNo != 0)
       {
         iDigit = iNo % 10;
         iRet = Power(iDigit,iCount);
         iSum = iSum + iRet;
         iNo = iNo / 10;
       }

       if(iSum == iTemp)
       {
         return true;
       }
       else
       {
         return false;
       }
    }
}