class Logic
{
    void CountEvenOddRange(int num)
    {
        int iEvenCount = 0,iOddCount = 0;
        int iCnt = 0;

        for(iCnt = 0;iCnt <= num;iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCount++;
            }
            else
            {
                iOddCount++;
            }
        }
        System.out.println("Even numbers : " + iEvenCount);
        System.out.println("Odd number: " + iOddCount);
    }

}
class Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CountEvenOddRange(50);
    }
}