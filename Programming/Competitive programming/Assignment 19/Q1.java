class Logic 
{
    void CheckLeapYear(int year)
    {
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            System.out.println(year + "is a leap year");
        }
        else
        {
            System.out.println(year + " Not a leap year");
        }
    }

}
class Q1
{
    public static void main(String A[])
    {
    Logic obj = new Logic();
    obj.CheckLeapYear(2024);
    }
}