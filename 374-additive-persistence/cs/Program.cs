using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
    static int Main(string[] args)
    {
        int n = int.Parse(args[0]);
        int a = 0;
        do 
        {
            n = n.ToString()
                .ToCharArray()
                .Select(c=>(int)c-48)
                .Sum(); 
            a++;
        } while (n >= 10);
        Console.WriteLine(a);
        return 0;
    }
}
