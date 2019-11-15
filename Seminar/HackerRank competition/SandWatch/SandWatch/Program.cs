using System;
using System.Linq;

namespace Darko
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            Console.WriteLine(new string('*', n));

            for (int i = 0; i < (n - 2) / 2; i++)
            {
                Console.Write(new string(' ', i + 1));
                Console.Write('*');
                Console.Write(new string(' ', n - 4 - i * 2));
                Console.Write('*');
                Console.WriteLine(new string(' ', i + 1));
            }
            Console.Write(new string(' ', n / 2));
            Console.WriteLine('*');
            for (int i = ((n - 2) / 2) - 1; i >= 0; i--)
            {
                Console.Write(new string(' ', i + 1));
                Console.Write('*');
                Console.Write(new string(' ', n - 4 - i * 2));
                Console.Write('*');
                Console.WriteLine();
            }
            Console.WriteLine(new string('*', n));
        }
    }
}
