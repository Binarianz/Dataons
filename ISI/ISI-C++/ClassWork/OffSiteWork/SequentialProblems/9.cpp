#include <iostream>
using namespace std;
int main()
{
    float laboratoryWork, midtermExam, finalExam, totalgrade;
    cout << "\nEnter the Laboratory Work,midterm Exam and final Exam marks out of 100.\n";
    cin >> laboratoryWork >> midtermExam >> finalExam;
    totalgrade = ((laboratoryWork / 100) * 40) + ((midtermExam / 100) * 25) + ((finalExam / 100) * 35);
    cout << "\nThe final grade of a student is = " << totalgrade << endl;
    system("pause");
    return 0;
}