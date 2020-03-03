#include <iostream>
#include <string>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "Company.h"
#include "CompanyController.h"
using namespace std;

int main()
{
	Company company = Company();
	
	company.addEmployee(new SalariedEmployee("Ashwin", "Doctor", 82000));
	company.addEmployee(new SalariedEmployee("Bhavana", "Engineer", 72000));
	company.addEmployee(new HourlyEmployee("Sameer", "Consultant", 28.50));

	CompanyController controller = CompanyController(&company);
	controller.start();
}
