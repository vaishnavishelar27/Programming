class Logic
{
    void CalculatePower(int base, int exp)
    {
        long lResult = 1, iCnt = 0;
        for(iCnt = 1;iCnt <= exp; iCnt++)
        {
            lResult = lResult *  base;
        }
        System.out.println(base +" the power of " + exp + " is " + lResult);
    }
}
class Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CalculatePower(2, 5);
    }
}