class Logic
{
    void CheckDivisible(int num)
    {
        if(num % 5 == 0 && num % 11 == 0)
        {
            System.out.println(num +" is divisible by 5 and 11");
        }
        else
        {
            System.out.println(num +" not divisible by 5 and 11");
        }
    }
}
class Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckDivisible(55);
    }
}