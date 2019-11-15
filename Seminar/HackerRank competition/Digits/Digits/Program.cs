using System;
using System.Collections.Generic;
namespace Darko
{
    class Program
    {
        static void Main(string[] args)
        {
            long number = int.Parse(Console.ReadLine());
            List<long> digits = new List<long>();
            while (number != 0)
            {
                long currentDigit = number % 10;
                digits.Add(currentDigit);
                number /= 10;
            }
            digits.Reverse();
            if(digits.Count<3)
            {
                Console.WriteLine(0);return;
            }
            for (int i = 0; i < digits.Count - 2; i++)
            {
                if (digits[i] != digits[i + 1] + digits[i + 2])
                {
                    Console.WriteLine(0);return ;
                }
            }
                Console.WriteLine(1);
           
        }


    }
}
