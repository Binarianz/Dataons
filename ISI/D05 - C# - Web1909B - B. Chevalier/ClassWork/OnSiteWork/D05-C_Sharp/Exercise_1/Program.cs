using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercise_1
{
    public enum Direction{north,south, east,west};
    class Program
    {
        /*        static int testint;
                static string myString;*/
        const int daysInWeek = 7;
        static void Main(string[] args)
        {
            //short myShort = short.MaxValue;
            //int myInt = int.MaxValue;
            //long myLong = long.MaxValue;

            //float myfloat = 3.1f;
            //double myDouble = 3.1d;
            //decimal myDecimal = 3.1m;
            //for(int i=0;i<5;i++)
            //{
            //    Console.WriteLine(i);
            //}


            //Console.WriteLine(myfloat);
            //Console.WriteLine(myDouble);
            //Console.WriteLine(myDecimal);

            //string myString = "hello World ";
            //char myChar = '!';
            ///*Console.WriteLine(myInt);
            //Console.WriteLine(myString);
            //Console.WriteLine(myLong);*/
            //Console.WriteLine(myString+myChar);

            //float f1 = (float)(1f/7);
            //Console.WriteLine(f1);

            /*  Direction d;
             d = Direction.west;

              switch (d)
              {
                  case Direction.north:
                      Console.WriteLine("North");
                      break;
                  case Direction.south:
                      Console.WriteLine("South");
                      break;
                  case Direction.east:
                      Console.WriteLine("East");
                      break;
                  case Direction.west:
                      Console.WriteLine("West");
                      break;
                  default:
                      Console.WriteLine("warning!!!!!!!!!!!!!!!!!!!!!!!!");
                      break;
              }*/

            /*  bool res;
              int newInt;
              string myStr = "12";
              res = int.TryParse(myStr, out newInt);
              Console.WriteLine("String is a numeric representation: " + res);
              Console.WriteLine(newInt);
              Console.Read();*/
            /*            Console.WriteLine("please enter a number for the size of your array of ints");
                        int arrySize = 0;
                        bool successfulParse = false;
                        do
                        {
                            Console.WriteLine("please enter an integer");
                            successfulParse = int.TryParse(Console.ReadLine(), out arrySize);
                        }
                        while (!successfulParse);
                        int[] userIntArray = new int[arrySize];
                        Console.WriteLine("please enter the"+arrySize+"ints into your array");
                        for (int i = 0; i < userIntArray.Length; i++)
                        {
                            int userInt = 0;
                            bool _sucessfulParse = false;
                            do
                            {
                                Console.WriteLine("please enter an integer");
                                _sucessfulParse = int.TryParse(Console.ReadLine(), out userInt);
                            } while (!_sucessfulParse);
                            userIntArray[i] = userInt;
                        }
                        float sum = 0;
                        for (int i = 0; i < userIntArray.Length; i++)
                        {
                            sum += userIntArray[i];
                        }
                        Console.WriteLine("the sum is : "+sum);*/
            /*int[] myArray = new int[3];
            int[] myOtherArray = myArray;



            int? myv1 = 6;
            int myv2 = (int)myv1;
            myv1 = myv2;
            Console.ReadKey();*/

        }
    }
}
