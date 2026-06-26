class Logic
{
    void CheckPrime(int num)
    {
        int iCount = 0;
        int iCnt = 0;
        for(iCnt = 1;iCnt <= num;iCnt++)
            {
                if(num % iCnt == 0)
                {
                    iCount++;
                }
            }
        
        if(iCount == 2)
        {
            System.out.println(num + " is a prime number");
        }

        else
        {
            System.out.println(num + " not a prime number");
        }
    }
}
class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPrime(11);
    }
}