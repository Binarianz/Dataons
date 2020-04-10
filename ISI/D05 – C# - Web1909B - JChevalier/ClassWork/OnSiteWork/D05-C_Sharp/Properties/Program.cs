using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Properties
{
    class Person
    {
        public string name { get; set; }
    }
    class Program
    {
        static void Main(string[] args)
        {
            bool a = false, b = false;
            bool c;
            c = (!(a || b) || (a && !b));
            Console.WriteLine(c);
            int an = a ? 7 : 10;
            Console.WriteLine(an);
            Person p = new Person();
            p.name = "joseph";
            Console.WriteLine(p.name);
            Console.ReadKey();


            
        }
    }
}
