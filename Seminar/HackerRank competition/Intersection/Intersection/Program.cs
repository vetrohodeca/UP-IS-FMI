using System;
using System.Linq;

namespace Intersection
{
    class Program
    {
        static void Main(string[] args)
        {

            string[] input = Console.ReadLine().Split(' ');
            int x1 = int.Parse(input[0]);
            int y1 = int.Parse(input[1]);
            int x2 = int.Parse(input[2]);
            int y2 = int.Parse(input[3]);
            int x3 = int.Parse(input[4]);
            int y3 = int.Parse(input[5]);
            int x4 = int.Parse(input[6]);
            int y4 = int.Parse(input[7]);
            if (x1 == x2 && y1 == y2 || y3 == y4 && x3 == x4)
            {
                Console.WriteLine(0);
                return;
            }//proverka dali e otsechka
            if (y1 == y2 && x1 == x2 || y3 == y4 && x3 == x4 || y2 == y3 && x1 == x2 || y2 == y1 && x2 == x1)// ako 2 tochki syvpadat
            {
               
                Console.WriteLine(1);
                return;
            }
            if (y1 == 0 && y2 == 0)// poneje delim na y, pravim otdelna proverka za nego.
            {
                if (x3 <= 0 && x4 >= 0 || x3 >= 0 && x4 <= 0)
                {
                        Console.WriteLine(1);
                    return;
                }
            }
            if (y3 == 0 && y4 == 0)// poneje delim na y, pravim otdelna proverka za nego.
            {
                if (x2 <= 0 && x1 >= 0 || x2 >= 0 && x1 <= 0)
                {
                        Console.WriteLine(1);
                    return;
                }
            }
            double a1 = y1 - y2;
            if (y2 < y1)
            {
                a1 = -a1;
            }
            double b1 = x2 - x1;
            if (x2 < x1)
            {
                b1 = -b1;
            }
            double c1 = (x1 - x2) * y1 + (y2 - y1) * x1;
            // Console.WriteLine(a1+"*x +" +b1 +"*y +"+c1 );

            double a2 = y3 - y4;
            if (y4 < y3)
            {
                a1 = -a1;
            }
            double b2 = x4 - x3;
            if (x4 < x3)
            {
                b2 = -b2;
            }
            double c2 = (x3 - x4) * y3 + (y4 - y3) * x3;
            //Console.WriteLine(a2 + "*x +" + b2 + "*y +" + c2);
            double xPoint;
            double yPoint;
            double sA1 = a1;//pazim
            double sA2 = a2;
            double sB1 = b1;


            a1 = a2 * a1;//umnojavame
            b1 = a2 * b1;
            c1 = a2 * c1;
            a2 = a1 * a2;
            b2 = b2 * a2;
            c2 = c2 * a2;

            b1 = b1 - b2;

            b1 = b1 - b2;
            c1 = c1 - c2;
            yPoint = c1 / b1;
            if (y1 > y2)//minimalnoto
            {
                int temp = y1;
                y1 = y2;
                y2 = temp;
            }
            if (y3 > y4)//minimalnoto
            {
                int temp = y3;
                y3 = y4;
                y4 = temp;
            }
            // Console.WriteLine(yPoint);
            //Console.WriteLine();
            if (yPoint <= y2 && yPoint >= y1 && yPoint >= y3 && yPoint <= y4)
            {
                Console.WriteLine(1);
            }
            else Console.WriteLine(0);
        }
    }
}
