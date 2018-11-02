using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace hex
{
    class Program
    {
        string sot,ox;
        long dec;
        static void Main(string[] args)
        {
            Program Ox = new Program();
            Ox.read();
        }
        void read()
        {
            Console.Write("Octal value:");
            sot = Console.ReadLine();
            convToDec();
            Console.Read();
        }
        void convToDec()
        {
            long iox = Int64.Parse(sot);
            dec=0;
            int i = 0;
            while(iox != 0)
            {
                dec = dec + (iox % 10) * (long)Math.Pow(8, i);
                iox = iox / 10;
                i++;
            }
            //Console.WriteLine(dec);
            hex();
        }
        void hex()
        {
            string temp; long t;
            ox="";
            while(dec != 0)
            {
                t = dec % 16;
                //Console.Write("Hexa value: ",ox);
                if(t < 10)
                {
                    temp = t.ToString();
                    temp = temp + ox;
                    ox = temp;
                    //Console.WriteLine(ox);
                }
                else
                {
                    temp = alpha(t);
                    temp = temp + ox;
                    ox = temp;
                }
                dec = dec / 16;
                
            }
            Console.WriteLine("Hexa value: {0}",ox);
        }
        string alpha(long num)
        {
            switch(num){
                case 10:
                    return "A";
                case 11:
                    return "B";
                case 12:
                    return "C";
                case 13:
                    return "D";
                case 14:
                    return "E";
                case 15:
                    return "F";
            }
            return "a";
                
        }
    }
}
