using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace LINQExcercises
{
    class LINQExerc
    {
        internal static void GetEvenNumbers(int[] n)
        {
            int[] evenNumbers = n.Where(e => e % 2 == 0).ToArray();
            WriteForEachArr(evenNumbers);
        }

        internal static void GetSquaredValuesOfPositiveNumbers(int[] n)
        {
            var positiveValues = from item in n
                                 where item > 0
                                 select item * item;
            var positiveValues2 = n.Where(i => i > 0).Select(i => i * i);
            WriteForEachArr(positiveValues);
            WriteForEachArr(positiveValues2);
        }

        internal static void GetFrequencies(int[] n3)
        {
            SortedList<int, int> sl = new SortedList<int, int>();
            for (int i = 0; i < n3.Length; i++)
            {
                if (sl.ContainsKey(n3[i]))
                {
                    sl[n3[i]]++;
                }
                else
                {
                    sl[n3[i]] = 1;
                }
            }
            foreach (var item in sl)
            {
                Console.WriteLine(item.Key + ": " + item.Value);
            }

            var freq = n3.Select(i => i + ": " + n3.Count(e => e == i));
            WriteForEachArr(freq);
        }

        internal static void GetNumSquaredValMoreThan20(int[] n2)
        {
            var numSquaredValMoreThan20 = n2.Where(i => i * i > 20);
            WriteForEachArr(numSquaredValMoreThan20);
        }

        internal static void GetAverageOfOddNumbers(int[] n)
        {
            double avgOfOddNums = n.Where(e => e % 2 == 1).Average();
            Console.WriteLine(avgOfOddNums);
        }

        private static void WriteForEachArr(IEnumerable enumerables)
        {
            foreach (var item in enumerables)
            {
                Console.Write(item + " ");
            }
            Console.WriteLine();
        }
    }
}
