using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JosephEmmanuel
{
    cla Program
    {
        static string  firstName;
        static void Main(string[] args)
        {
           
            Console.WriteLine("Hello World "); 

            
            
             DisplayMeage("Hello World");
            
            
            firstName = GetStringFromUser();
             DisplayMeage(firstName);
            
            
            firstName = GetStringFromUser("Please enter your first name");
            DisplayMeage(firstName);
            
            
             GetStringFromUser(15, "Please enter a name no longer than 15 characters");
            
            
            GetStringFromUser(2,12,"Please enter a name between 2 and 12 characters long");
            
            
            GetUserInt("Enter an intiger");
            
            
            int[] k = new int[5];
            k = MakeUserIntArray(5);
            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine(k[i]);
            }
            
            
                        string [] k = new string[5];
                        k = MakeUserStringArray(5);
                        for (int i = 0; i < 5; i++)
                        {
                            Console.WriteLine(k[i]);
                        }
             
            
            rintAllPrimesBelow(GetUserInt("Enter an intiger"));
            
            
            onsole.WriteLine(ConcatenateStrings(MakeUserStringArray(GetUserInt("Please enter the string array size"))));            
            
            
            Console.WriteLine((CompareIntArrays(MakeUserIntArray(GetUserInt("Enter the size of First Integer array")), MakeUserIntArray(GetUserInt("Enter the size of Second Integer array"))))?"Arrays are same":"Arrays are not same");
            
            
            onsole.WriteLine("The result of factorial calculation is : "+Factorial(GetUserInt("Enter the number to calculate factorial")));
             
            Console.ReadKey();
        }
        
        static void DisplayMeage(string  meage) {
            Console.WriteLine(meage);
        }
         
        
        static string GetStringFromUser() {
            return Console.ReadLine();}
        static string GetStringFromUser(string meage)
        {
            DisplayMeage(meage);
			return Console.ReadLine(); }
        static string GetStringFromUser(int maxLength,string meage)
        {
            DisplayMeage(meage);
            while (firstName.Length>maxLength)
            {
                DisplayMeage("Re-Enter the string, maximum allowed length is "+maxLength);
				firstName = Console.ReadLine();
            }
            return firstName;
        }
         
         
        static string GetStringFromUser(int minLength,int maxLength, string meage)
        {
            do
            {
                DisplayMeage(meage);
                firstName = Console.ReadLine();
            } while (firstName.Length > maxLength|| firstName.Length < minLength); 
            return firstName;
        }
         
         
        static int GetUserInt(string meageString)
        {
            int userInt;
            bool status;
            do
            {
               status= Int32.TryParse(GetStringFromUser(meageString), out userInt);
            } while (status== false);
            return userInt;
        }
         
         
        static int[] MakeUserIntArray(int arrySize)
        {
            int[] userArray = new int[arrySize];
            for (int i = 0; i < arrySize; i++)
            {
                userArray[i] = GetUserInt("Please enter the element at position " +i.ToString());
				}
            return userArray;
        }
         
         
        static string[] MakeUserStringArray(int arraySize)
        {
            string[] userStringArray = new string[arraySize];
            for (int i = 0; i < arraySize; i++)
            {
                userStringArray[i] = GetStringFromUser("Please enter the string element in postion " + i);/
            }
            return userStringArray;
        }
         
         
        static bool CheckIfPrime(int numberToCheck)
        {
           bool answer=true;
		   

            for (int i = 2; i <= numberToCheck/2; i++) checking from 2 to half of the the paed value becouse only the number till half of paed value can divide the number equaly.
            {               
                if (numberToCheck % i == 0)

                {
                    answer = false;

                    break;

                }
            }                
            return answer;

        }
         
        
        static void PrintAllPrimesBelow(int numberToPrime)
        {
            for (int i = numberToPrime; i >= 2; i--)


                Console.Write(CheckIfPrime(i)==true ? i.ToString()+(i!=2?", ":string.Empty):string.Empty);

        }
         
         
        static string ConcatenateStrings(string[] stringToConcatenate)
        {
            string answerString=string.Empty;

            for (int i = 0; i < stringToConcatenate.Length; i++)
                answerString += stringToConcatenate[i] + (i==stringToConcatenate.Length-1||stringToConcatenate[i]==string.Empty?string.Empty:", ");
           
            return answerString;

        }
         
         
        static bool CompareIntArrays(int[] array1,int[] array2)
        {
            bool iameArray = false;

            if (array1.Length == array2.Length)

            {
                for (int i = 0; i < array1.Length; i++)

                    iameArray = array1[i] == array2[i] ? true : false;

            }
            return iameArray;

        }
         
         
        static int Factorial(int userInput)
        {
            int result=1;

            for (int i = 2; i <= userInput; i++)

                result *= i;

            return result;

        }
         
    }
}
