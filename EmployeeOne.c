#include <string.h>
#include "employee.h"

ptrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber) {
    const PtrToConstEmployee endPtr = ptr + tableSize;
    
    for(; ptr < endPtr; ptr++) { // Search until end of table
        if(ptr->number == targetNumber) // Check if it equals the Employee number
            return (ptrToEmployee) ptr;
    }
    return NULL; // This will only happen if no Employee number matches in loop above
}

// Essentially the same functionallity as above but comparing strings to check if equal
ptrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char * targetName) {
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++) { 
        if(strcmp(ptr->name, targetName) == 0) 
            return (ptrToEmployee) ptr;
    }
    return NULL;
}

ptrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize, char * targetPhone) {
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++) { 
        if(strcmp(ptr->phone, targetPhone) == 0) 
            return (ptrToEmployee) ptr;
    }
    return NULL;
}

ptrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary) {
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++) { 
        if(ptr->salary == targetSalary) 
            return (ptrToEmployee) ptr;
    }
    return NULL;
}