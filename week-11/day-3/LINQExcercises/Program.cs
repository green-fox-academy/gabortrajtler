using System;

namespace LINQExcercises
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] n = { 1, 3, -2, -4, -7, -3, -8, 12, 19, 6, 9, 10, 14 };
            LINQExerc.GetEvenNumbers(n);
            LINQExerc.GetAverageOfOddNumbers(n);
            LINQExerc.GetSquaredValuesOfPositiveNumbers(n);
            int[] n2 = new[] { 3, 9, 2, 8, 6, 5 };
            LINQExerc.GetNumSquaredValMoreThan20(n2);
            int[] n3 = new int[] { 5, 9, 1, 2, 3, 7, 5, 6, 7, 3, 7, 6, 8, 5, 4, 9, 6, 2 };
            LINQExerc.GetFrequencies(n3);
        }
    }
}
