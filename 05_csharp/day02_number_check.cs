using System.Runtime.InteropServices;

public class NumberCheck
{
    public static void Run()
    {
        Console.Write("Enter a number :");
        int num = Convert.ToInt32(Console.ReadLine());

        if(num > 0)
        {
            Console.WriteLine("Positive");
        }
        else if(num < 0)
        {
            Console.WriteLine("Negative");
        }
        else
        {
            Console.WriteLine("Zero");
        }
    }
}