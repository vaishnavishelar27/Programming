class Logic
{
    void printReverse(int num)
    {
        int iCnt = 1;
        for(iCnt = num;iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt + " ");
        }
        System.out.println();
    }
}
class Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}