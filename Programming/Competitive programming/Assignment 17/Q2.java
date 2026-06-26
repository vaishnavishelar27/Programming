class Logic
{
    void CheckPallindrome(int iNo)
    {
        int iOrginalNum = iNo;
        int iRev = 0;

        while(iNo > 0)
        {
            int iRem = iNo % 10;
            iRev = (iRev * 10) + iRem ;
            iNo = iNo / 10;
        }

        if(iOrginalNum == iRev)
        {
            System.out.println("Is a palindrome");
        }
        else
        {
            System.out.println("Is not a palindrome");
        }

    }
}
class Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPallindrome(121);
    }
}
