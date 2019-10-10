using System;
using System.Linq;

namespace Codewars
{
    public static class HighAndLow
    {
        public static string result(string numbers)
        {
            string[] stringNums = numbers.Split(" ");
            int[] nums = new int[stringNums.Length];
            for (int i = 0; i < stringNums.Length; i++)
            {
                nums[i] = Convert.ToInt32(stringNums[i]);
            }
            int max = nums.Max();
            int min = nums.Min();
            return $"{max} {min}";
        }
        public static string HighAndLowBest1(string numbers)
        {
            var parsed = numbers.Split().Select(int.Parse);
            return parsed.Max() + " " + parsed.Min();
        }
        public static string HighAndLowBest2(string numbers)
        {
            var numbersList = numbers.Split(' ').Select(x => Convert.ToInt32(x));
            return string.Format("{0} {1}", numbersList.Max(), numbersList.Min());
        }
    }
}
