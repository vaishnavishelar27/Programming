class Logic
{
    void CheckSign(int num)
    {
        if(num < 0)
        {
            System.out.println(num + " is a negative number");
        }
        else 
        {
            System.out.println(num + "is a positive number");
        }
    }
}
class Q5 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckSign(-8); 
    }
    
}