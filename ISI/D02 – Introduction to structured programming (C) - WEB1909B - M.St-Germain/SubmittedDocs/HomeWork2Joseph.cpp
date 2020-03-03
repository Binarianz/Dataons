#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
using namespace std;
bool areSame(int arr[], int size);
void orderArr(char arr[], int size);
bool isSoreted(double arr[], int size);
bool isIdentical(string str, int number);
void reverse(string str);
void bubbleSort(int arr[], int n);
void swap1(int *a, int *b);
int binarySearch(int arr[], int length, int ch);
int main()
{
    int arr[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    char wordArr[] = {'d', 'b', 'c', 'a'};
    double arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr3[10] = {1, 4, 5, 8, 7, 6, 2, 3, 9, 10};
    int number = 4;
    areSame(arr, 10) ? cout << "\nSame numbers" : cout << "\n Not Same numbers";
    orderArr(wordArr, (sizeof(wordArr) / sizeof(*wordArr)));
    isSoreted(arr1, 10) ? cout << "\nSorted\n" : cout << "\n Not Sorted\n";
    isIdentical("aabbccccdc", number) ? cout << "\nThere is identical\n" : cout << "\n There is no identical\n";
    reverse("joseph");
    bubbleSort(arr3, (sizeof(arr3) / sizeof(*arr3)));
    cout << "the item found at : " << binarySearch(arr2, (sizeof(arr2) / sizeof(*arr2)), 6) << endl;
    system("pause");
}
bool areSame(int arr[], int size)
{
    int checker = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (checker != arr[i])
            return false;
    }
}
void orderArr(char arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((int)arr[i] > (int)arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

bool isSoreted(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

bool isIdentical(string str, int number)
{
    int counter = 0;
    for (int i = 0; i < str.length() - 2; i++)
    {
        if (str[i] == str[i + 1])
            counter++;
        if (counter - 1 == number)
        {
            return true;
        }
    }

    return false;
}

void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i] << endl;
    }
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap1(&arr[j], &arr[j + 1]);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int binarySearch(int arr[], int length, int ch)
{
    int mid, start = 0, end = length - 1;
    mid = (start + (end + 1)) / 2;
    while (mid >= 0)
    {

        if (arr[mid] == ch)
        {
            return mid;
        }
        else if (arr[mid] < ch)
        {
            start = mid;
        }
        else if (arr[mid] > ch)
        {
            end = mid;
        }
        else if (mid == end || mid == start)
        {
            return -1;
        }
        mid = (start + end) / 2;
    }
    //return 800;
}