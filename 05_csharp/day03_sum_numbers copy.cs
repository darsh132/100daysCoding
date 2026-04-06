using System.Runtime.InteropServices;

public class SumNum
{
    public static void Run()
    {
        Console.WriteLine("Enter number: ");

        int n = int.Parse(Console.ReadLine());

        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            sum += i;
        }

        Console.WriteLine($"Sum = {sum}");
    }
}