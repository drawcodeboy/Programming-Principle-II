#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAX_RATE 0.2

int main(){
    const int MONTHS = 12;
    int m_salary, y_salary;

    printf("Input your salary: ");
    scanf("%d", &m_salary);
    y_salary = m_salary * MONTHS;

    printf("Year Salary is %d\n", y_salary);
    printf("Your Tax is %f\n", y_salary*TAX_RATE);

    // MONTHS = 24; // error: assignment of read-only variable 'MONTHS'

    return 0;
}