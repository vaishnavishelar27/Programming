class Logic
{
    void FindMin(int a, int b, int c)
    {
        if(a <= b && a <= c)
        {
            System.out.println("Minimum number is : " + a);
        }
        else if(b <= a && b <= c)
        {
            System.out.println("Minimum number is : "+ b);
        }
        else
        {
            System.out.println("Minimum number is : " + c);
        }
    }
}
class Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindMin(3,7,2);
    }
}