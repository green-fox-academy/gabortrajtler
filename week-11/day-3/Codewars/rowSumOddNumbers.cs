using System;
using System.Linq;

namespace Codewars
{
    public static class RowSumOddNumbers
    {
        public static long result(long n)
        {
            long numCountBeforeRow = NumberCountBeforeRow(n);   // 2 -> 1
            int[] oddNums = new int[numCountBeforeRow + n];     // int[3]
            oddNums = FillOddNumbers(oddNums);      // int[0] = 1     int[1] = 3    int[2] = 5
            int sum = 0;
            for (long i = numCountBeforeRow; i < oddNums.Length; i++)
            {
                sum += oddNums[i];
            }
            return sum;
        }

        private static int[] FillOddNumbers(int[] oddNums)
        {
            oddNums[0] = 1;
            for (int i = 1; i < oddNums.Length; i++)
            {
                oddNums[i] = oddNums[i - 1] + 2;
            }
            return oddNums;
        }

        private static long NumberCountBeforeRow(long n)
        {
            long sum = 0;
            for (int i = 1; i < n; i++)
            {
                sum += i;
            }
            return sum;
        }


        public static long result2(long n)
        {
            return n * n * n;
        }

        public static long result3(long n)
        {
            return (long)Math.Pow(n, 3);
        }
    }
}
