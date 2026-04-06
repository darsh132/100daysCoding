using System.Runtime.InteropServices;

public class Multiplication
{
    public static void Run()
    {
        Console.WriteLine("Enter number: ");

        int n = int.Parse(Console.ReadLine());

        for(int i = 1; i <= 10; i++)
        {
            Console.WriteLine($"{n} x {i} = {n*i}");
        } 
    }
}