using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace programxe1
{
    class Program
    {
        string sbin;
        long dec;
        static void Main(string[] args)
        {
            Program Convert = new Program();
            Convert.read();
            Convert.print();
            Console.Read();
        }
        void read()
        {
            Console.Write("Binary value:");
            sbin = Console.ReadLine();
            convert();
        }
        void convert()
        {
            long bin = Int64.Parse(sbin); 
            int len = sbin.Length;
            dec = 0;
            for(int i=0;i<len;i++)
            {
                dec = dec +((bin%10)*(long)Math.Pow(2,i)); // convert binary to decimal
                bin = bin / 10;
            }
        }
        void print()
        {
            Console.WriteLine("Decimal value: {0}",dec);
        }
    }
}
