class Logic
{
 void SumEvenNumbers(int num)
 {
    int iSum = 0,iCnt = 0;
    for(iCnt = 1;iCnt <= num;iCnt++)
    {
    if(num % 2 == 0)
    {
        iSum = iSum + iCnt;
        
    }
   
    }
    System.out.println("Sum of even number is: "+ iSum);

 }
}
class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumEvenNumbers(10);

    }
}
