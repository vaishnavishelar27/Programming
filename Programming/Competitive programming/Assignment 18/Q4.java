class Logic
{
    void SumEvenOddDigits(int num)
    {
        int iEvenSum = 0;
        int iOddSum = 0;
        int iDigit = 0;
        while (num > 0) 
        {
            iDigit = num % 10;
            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            num = num / 10;
        }
        System.out.println("Sum of even digits : " + iEvenSum);
        System.out.println("Sum of odd digits : " + iOddSum);

    }
}
class Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}