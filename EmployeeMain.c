//gcc employeeMain.c employeeTable.c employeeOne.c
//gcc employeeMain.c employeeTable.c employeeTwo.c

#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void) {
    // Defined in employeeSearchOne.c
    ptrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    ptrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    ptrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    ptrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    
    // Defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    ptrToEmployee matchPtr; // Declaration
    
    // Example not found
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");
    

    // Example found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");
    
    // Examples for phone number
    // Example not found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "123-456-789");
    if (matchPtr != NULL)
        printf("Employee Phone Number 123-456-789 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Phone Number 123-456-789 is NOT found in the record\n");
    
    // Example not found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if (matchPtr != NULL)
        printf("Employee Phone Number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Phone Number 909-555-1235 is NOT found in the record\n");

    // Examples for salary
    // Example not found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 1.23);
    if (matchPtr != NULL)
        printf("Employee Salary 1.23 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary 1.23 is NOT found in the record\n");
    
    // Example not found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);
    if (matchPtr != NULL)
        printf("Employee Salary 6.34 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary 6.34 is NOT found in the record\n");
    return EXIT_SUCCESS;
}