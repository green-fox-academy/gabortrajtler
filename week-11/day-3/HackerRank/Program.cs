using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;

namespace HackerRank
{

    class Solution
    {
        // Complete the repeatedString function below.
        static long repeatedString(string s, long n)
        {
            int slength = s.Length;  // aba -> 3
            int aCount = s.Count(c => c == 'a');    // aba -> 2
            long baseCount = (n / slength) * aCount;    // (10 / 3) * 2 = 6
            long remainder = n % slength;     // 10 % 3 = 1
            int aInRemainderCount = s.Substring(0, (int)remainder).Count(c => c == 'a');    // 1
            return baseCount + aInRemainderCount;   // 6+1 = 7
        }

        static void Main(string[] args)
        {
            //TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

            //string s = Console.ReadLine();
            string s = "aba";

            //long n = Convert.ToInt64(Console.ReadLine());
            long n = 10;

            long result = repeatedString(s, n);

            //textWriter.WriteLine(result);
            Console.WriteLine(result);

            /*textWriter.Flush();
            textWriter.Close();*/
        }
    }
}
