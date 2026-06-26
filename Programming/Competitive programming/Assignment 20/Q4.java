class Logic
{
    void FindLargestDigit(int num)
    {
        int iMax = 0, iDigit = 0;
        while (num > 0) 
        {
            iDigit = num % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            num = num / 10;
            
        }
        System.out.println("Largest digit is " + iMax);
    }
}
class Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindLargestDigit(83429);
    }
}