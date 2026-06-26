class Logic
{
    void DisplayFactor(int num)
    {
        int iCnt = 0;
        for(iCnt=1;iCnt<=num;iCnt++)
        {
            if(num % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
class Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.DisplayFactor(12);
    }
}