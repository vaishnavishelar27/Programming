class Logic
{
    void PrintDivisibleBy2and3(int num)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt <= num;iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.println(iCnt + " ");
            }
        }
    }
}
class Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.PrintDivisibleBy2and3(30);
    }
}