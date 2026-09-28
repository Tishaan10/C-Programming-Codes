#include <stdio.h>
#include <string.h>
int main() {
    char role[20];
    float basic_salary, da, ta, hra, total_salary;

    printf("Enter employee role (Manager/Supervisor): ");
    scanf("%s", role);

    if (strcmp(role, "Manager") == 0); {

    basic_salary = 40000;
    ta = 0.03 * basic_salary;
    da = 0.04 * basic_salary;
    hra = 0.01 * basic_salary;
    }
    else if (strcmp(role, "Supervisor") == 0); {
    basic_salary = 30000;
    ta = 0.03 * basic_salary;
    da = 0.03 * basic_salary;
    hra = 0.01 * basic_salary;
    }
    else {
        printf("Invalid role entered.");
        return 0;
    }
    total_salary = basic_salary + ta + da + hra;
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("TA: %.2f\n", ta);
    printf("DA: %.2f\n", da);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total_salary);
    
    return 0;
}