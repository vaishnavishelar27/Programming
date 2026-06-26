class Logic
{
    void CheckPerfect(int num)
    {
        int iSum = 0, iCnt = 0;
        for(iCnt = 1;iCnt <=num / 2;iCnt++)
        {
            if(num % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == num)
        {
            System.out.println(num + " is a perfect number");
        }
        else
        {
            System.out.println(num + " is not a perfect number");
        }
    }
}
class Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPerfect(6);
    }
}
