class Logic
{
    void PrintOddNumbers(int n)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt <= n;iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt + " ");
            }
        }
        System.out.println();
    }
}
class Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.PrintOddNumbers(20);

    }
}
