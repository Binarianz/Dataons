#include <iostream>
using namespace std;
float taxCalulator(bool, bool, int, float);
float AdditionalTaxRed(float);
int main()
{
    bool IsMarried, IsNew;
    int NoofChildren;
    float BasicSalary, TotalTax;
    cout<<"==============================================================================\n"
    <<"                             Tax-Calculator                                 \n"
    <<"==============================================================================\n";
    cout << " Is the person is married(true/false) : ";
    cin >> IsMarried;
    cout << " Is the person is new to the province(true/false) : ";
    cin >> IsNew;
    cout << "Enter the number of childern : ";
    cin >> NoofChildren;
    cout << "Enter the salary : ";
    cin >> BasicSalary;
    cout <<"The total tax amount after all reduction is : "<< taxCalulator(IsMarried, IsNew, NoofChildren, BasicSalary);
}
float taxCalulator(bool IsMarried, bool IsNew, int NoofChildren, float BasicSalary)
{
    
    float  totalTax,taxRate=0;
    totalTax = AdditionalTaxRed(BasicSalary) ;
    if (IsMarried)
    {
       taxRate=taxRate+.02;
    }
    if (IsNew)
    {
        taxRate=taxRate+.08;
    }
    if (NoofChildren > 0)
    {        
        taxRate=taxRate+(NoofChildren*.005);
    }
    totalTax=totalTax*(1-taxRate);
    return totalTax;
}
float AdditionalTaxRed(float basicSalary)
{
    float totalTax;
    if (basicSalary >= 0 && basicSalary <= 18000)
    {
        totalTax=basicSalary*0.10;
    }
    else if (basicSalary >= 18000.01 && basicSalary <= 32000)
    {
        totalTax=(18000*0.10)+((basicSalary-18000)*0.20);
    }
    else if (basicSalary >= 32000.01 && basicSalary <= 60000)
    {
        totalTax=((basicSalary-32000)*0.30)+(14000*0.20)+(18000*0.10);
    }
    else
    {
        totalTax=((basicSalary-60000)*40)+(28000*0.3)+(14000*0.20)+(18000*0.10);
    }
    return totalTax;
}