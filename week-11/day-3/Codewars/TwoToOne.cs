using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Codewars
{
    class TwoToOne
    {
        public static string Longest(string s1, string s2)
        {
            return new string((s1 + s2).Distinct().OrderBy(c => c).ToArray());
        }
    }
}
