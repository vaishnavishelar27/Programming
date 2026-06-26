
 class Logic 
{
    void SumOfDigits(int iNo)
    {
    int iSum = 0;
    int iDigit = 0;
    int iOriginalNum = iNo;
    
    while (iNo > 0) 
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    System.out.println(" Sum of digits " + iOriginalNum + " is " + iSum);
    }
    
}
class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumOfDigits(1234);

    }
}