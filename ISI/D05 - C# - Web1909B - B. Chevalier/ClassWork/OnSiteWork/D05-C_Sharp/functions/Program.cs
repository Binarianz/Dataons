using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Functions
{
    class Program
    {
        static void Main(string[] args)
        {
            /* DisplayMessage("hi");
             DisplayMessage(new string[] { "Elephants ","are ","grey " ,"and"," big"},true);
            Console.WriteLine( GetUserInt());
             Console.WriteLine(GetUserInt(3,199));
             Console.ReadKey();*/
            //int k = MyRandom();
            // Console.WriteLine("your first name is "+GetUserString("Please enter your first name"));
            //string userBool = GetUserBool()==true?"Bool was true":"Bool was false";
            //string userBool = GetUserBool("Do you like icecream?")==true?"You like icecream": "You don't like icecream";
            //Console.WriteLine(userBool);
            // Console.ReadKey();
            string[] userStringArray = GetUserStringArray(GetUserInt("Please specify the size of your string array"));
        }

        static void DisplayMessage(string toDisplay)
        {
            Console.WriteLine(toDisplay);
        }
        static void DisplayMessage(string[] words,bool singleLine)
        {
            for (int i = 0; i < words.Length; i++)
            {
                if (singleLine)
                {
                    Console.Write(words[i]);
                }
                else
                {
                    Console.WriteLine(words[i]);
                }
            }

        }
        static int GetUserInt()
        {
            int userInt = 0;
            bool successfulParse = false;
            do
            {
                Console.WriteLine("\nPlease enter an intiger");
                successfulParse = int.TryParse(Console.ReadLine(), out userInt);

            } while (!successfulParse);
            return userInt;
        }
        static int GetUserInt(int min=0,int max=int.MaxValue)
        {
            int userInt = 0;
            bool successfulParse = false;
            do
            {
                Console.WriteLine("\nPlease enter an intiger between "+min+" and "+max);
                successfulParse = int.TryParse(Console.ReadLine(), out userInt);

            } while (!successfulParse||userInt<min||userInt>max);
            return userInt;
        }


        static string hello()
        {
            return "hello";
        }
        static int MyRandom()
        {
            Random myRand = new Random(56);
            Random randInt = new Random(56);
            
            int myOtherRandomInt = myRand.Next();
            Console.WriteLine(randInt);
            Console.WriteLine(myOtherRandomInt);
            return 0;
        }
        static string GetUserString(string instruction)
        {
            Console.WriteLine(instruction);
            return Console.ReadLine();
        }

        static int GetUserInt(string instructions)
        {
            int userInt = 0;
            bool successfulParse = false;
            do
            {
                Console.WriteLine("\nInput must be an integer");
                successfulParse = int.TryParse(Console.ReadLine(), out userInt);

            } while (!successfulParse );
            return userInt;
        }
        static bool GetUserBool()
        {
            string userInput = "";
           // bool k;
            do
            {
                Console.WriteLine("Pease enter 't' or 'f'");
                userInput = Console.ReadLine();
            } while (userInput !="t"&& userInput !="f");
            return userInput=="t"?true:false;
        }
        static bool GetUserBool(string instructions)
        {
            string userInput = "";
            Console.WriteLine(instructions);
            do
            {
                Console.WriteLine("Pease enter 't' or 'f'");
                userInput = Console.ReadLine();
            } while (userInput != "t" && userInput != "f");
            return userInput == "t" ? true : false;
        }
        static srtring[] GetUserStringArray(int arraySize)
        {
            string[] toReturn = new string[arraySize];
            for (int i = 0; i < arraySize; i++)
            {
                toReturn[i] = GetUserInt();
            }

        }
    }
}
