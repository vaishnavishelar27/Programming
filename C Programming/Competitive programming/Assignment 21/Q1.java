class Logic
{
    void ProductOfDigits(int num)
    {
        int iProduct = 1,iDigit = 0;
        if(num == 0)
        {
            iProduct = 0;
        }
        while (num != 0) 
        {
            iDigit = iDigit % 10;
            iProduct = iProduct * iDigit;
            num = num / 10;
        }
        System.out.println("Prodct of digit is " + iProduct);
    }
}
class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.ProductOfDigits(234);
    }
}