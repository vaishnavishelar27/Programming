class Logic
{
    void FindSmallestDigit(int num)
    {
        int iMin = 9, iDigit = 0;
        while (num > 0) 
        {
            iDigit = num % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            num = num / 10;
            
        }
        System.out.println("Smallest digit is " + iMin);
    }
}
class Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindSmallestDigit(45872);
    }
}