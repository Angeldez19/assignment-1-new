
// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
  cout << "Hello, World!" << endl;
  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/*
Program Name:
Tax Calculator

Program Description:
During September, businesses across the United States take time to thank their payroll teams and reflect on all of the successful paydays of the past year. While technology has made it easier than ever for HR teams to pay their employees, crunching the numbers can still be a laborious task for payroll professionals. National Payroll Week serves as a reminder that there are dedicated professionals working hard everyday to ensure we get paid accurately and on time.

Design:
A. INPUT
int employeeID = 0;
int employeeHours = 0;
int USDPerHour = 0;
int integerwithholdingRate = 0;

B. OUTPUT
double grosspayUSD = 0.0;
double federalTaxWithholdingUSD = 0.0;
DATA netPayUSD = 0.0;

C. CALCULATIONS
First calculate the total gross pay from the hours worked and the hourly rate inputs. 
grosspayUSD = employeeHours * USDPerHour;
double decimalWitholdingRate = integerwithholdingRate / 100.0;
federalwithholdingRate = grosspayUSD * federalwithholdingRate;
netPayUSD = grosspayUSD - federalwithholdingRate

D. LOGIC and ALGORITHMS
Welcome "Welcome to my Weekly Payroll program!!"

Prompt "Enter your employee ID number (numbers only): "
Input employeeID

Prompt "Enter number of hours worked (whole numbers): "
Input employeeHours

Prompt "Enter the hourly rate: "
Input USDPerHour

Prompt "Enter the federal withholding rate: "
Input federalwithholdingRatePercent

Do Calculations

Heading "Your Payroll Summary:"

Label "Gross Pay: "
DATA grosspayUSD

Label "Federal Tax Withholding: "
Data federalTaxWithholdingUSD

Label "Net Pay: "
DATA netPayUSD

Goodbye "Thank you for using my Weekly Payroll program!!"


SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15
Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578
Thank you for using my Weekly Payroll program!!



Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!