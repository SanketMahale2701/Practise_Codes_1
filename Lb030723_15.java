/*
    Program 340
    accept number from user and return the Genericroot of digits of that number

            iNo = 987898

            iSum = 9 + 8 + 7 + 8 + 9 + 8
            iSum = 49

            iNo = 49
            isum = 4 + 9
            iSum = 13

            iNo = 13
            iSum 1 + 3
            iSum = 4

 */
import java.util.Scanner;

class Lb030723_15
{
    public static void main(String Args[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number :");
       int iNo = sobj.nextInt();

       digits dobj = new digits();

       int iRet = dobj.GenericRoot(iNo);
       System.out.println("Generic root is :"+iRet);
    }
}
class digits
{
    int GenericRoot(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;
        if(iNo < 0 )
        {
            iNo = -iNo;
        }

      while(iNo >= 10)
      {
        while(iNo != 0)
        {
          iDigit = iNo % 10; 
          iSum = iSum + iDigit;
          iNo = iNo / 10;
        }
        if( iSum >= 10 )
        {
            iNo = iSum;
            iSum = 0;
        }
        else
        {
            iNo = iSum;
            break;
        }
      }
      return iNo;
    } 
}