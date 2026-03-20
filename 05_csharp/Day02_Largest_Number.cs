using System.Runtime.InteropServices;

public class LargestNumber
{
    public static void Run()
    {
        Console.Write("Enter first number :");
        int a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter second number :");
        int b = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter third number :");
        int c = Convert.ToInt32(Console.ReadLine());

        int largest;

        if(a >= b && a >= c)
        {
            largest = a;
        }
        else if(b >= a && b >= c)
        {
            largest = b;
        }
        else
        {
            largest = c;
        }
        Console.WriteLine("Largest number is " + largest);
    }
}