public class Day02_Input_IF
{
    public static void Run()
    {
        Console.Write("Enter your age: ");

        int age = int.Parse(Console.ReadLine());

        if(age >= 18)
        {
            Console.WriteLine("You are an adult");
        }
        else
        {
            Console.WriteLine("You are an minor.");
        }
    }
}