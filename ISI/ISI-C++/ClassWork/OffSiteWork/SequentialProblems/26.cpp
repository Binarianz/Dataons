#include <iostream>
using namespace std;
int main()
{
    int a[3], i, j, min, temp;
    for (i = 0; i < 3; i++)
    {
        cout << "Enter the " << i + 1 << " elemnt\n";
        cin >> a[i];
    }
    for (i = 0; i < 3; i++)
    {
        min = i;
        for (j = i + 1; j < 3; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted values are\n");
    for (i = 0; i < 3; i++)
        cout << a[i] << "\n";
    system("pause");
    return 0;
}