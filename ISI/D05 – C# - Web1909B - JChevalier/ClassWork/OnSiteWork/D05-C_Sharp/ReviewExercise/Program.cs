using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ReviewExercise
{
    class Program
    {
        static int ASCII_SIZE = 256;
        static void Main(string[] args)
        {
            int[] testArray = { 3, 5, 6, 7, 2, 1, 12 };
            Console.WriteLine(sum(3,5));
            //Console.ReadKey();
            Console.WriteLine(ModFunction(6,3));
           // Console.ReadKey();
            Console.WriteLine(OddOrEven(4));
           // Console.ReadKey();
            Console.WriteLine(SmallestNumber(testArray));
            Console.ReadKey();
            Console.WriteLine(SortArray(testArray));
            Console.ReadKey();
            Console.WriteLine(getMaxOccuringChar("sample string"));
            Console.ReadKey();
        }
        static int sum(int int1,int int2)
        {
            return int1 + int2;
        }
        static bool ModFunction(int integer_1, int integer_2)
        {
            return integer_1 % integer_2 == 0 ? true : false;
        }
        static string OddOrEven(int integerToCheck)
        {
            return integerToCheck % 2 == 0 ? "Even" : "Odd";
        }
        static int SmallestNumber(int[] testArary)
        {
            int smallest=0;
            for (int i = 0; i < testArary.Length-1; i++)
            {
                smallest = testArary[i] < testArary[i + 1] ? testArary[i] : testArary[i + 1];
            }
            return smallest;
        }
        static int[] SortArray(int[] sortArray)
        {
            int[] sortedArray = new int[sortArray.Length];
            for (int i = 0; i < sortArray.Length-1; i++)
            {
                sortedArray[i]=SmallestNumber
            }
            for (int i = 0; i < sortArray.Length; i++)
            {
                Console.WriteLine(sortArray[i]);
            }
            return sortArray;
        }
        static char getMaxOccuringChar(String str)
            {
                // Create array to keep the count of 
                // individual characters and  
                // initialize the array as 0 
                int[] count = new int[ASCII_SIZE];

                // Construct character count array 
                // from the input string. 
                int len = str.Length;
                for (int i = 0; i < len; i++)
                    count[str[i]]++;

                int max = -1; // Initialize max count 
                char result = ' '; // Initialize result 

                // Traversing through the string and  
                // maintaining the count of each character 
                for (int i = 0; i < len; i++)
                {
                    if (max < count[str[i]])
                    {
                        max = count[str[i]];
                        result = str[i];
                    }
                }

                return result;
            }
        
    }
}
