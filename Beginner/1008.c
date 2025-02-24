#include <stdio.h>

int main () {
    int employee_number, work_hours;
    float per_hour, salary;
    scanf("%d %d %f", &employee_number, &work_hours, &per_hour);
    salary = work_hours * per_hour;
    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n", salary);
	
	return 0;
}
