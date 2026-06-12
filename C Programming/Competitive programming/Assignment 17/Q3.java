class Logic
{
    void FindMax(int a , int b)
    {
        if(a > b)
        {
            System.out.println("Maximum number : "+ a);
        }
        else
        {
            System.out.println("Maximum number :"+ b);
        }
    }
}
class Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindMax(20,15);
    }
}