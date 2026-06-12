class Logic
{
    void CountFactors(int num)
    {
        int iCnt = 0,iCount =0;
        for(iCnt = 1;iCnt<=num;iCnt++)
        {
            if(num % iCnt == 0)
            {
                iCount++;
            }
        }
        System.out.println(iCount);
    }
}
class Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CountFactors(12);
    }
}