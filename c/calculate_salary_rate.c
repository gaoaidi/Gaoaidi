#include <stdio.h>
#define BASIC_SALARY 10
#define OVERTIME_WORK_RATE 1.5
#define RATE_1 0.15
#define RATE_2 0.2
#define RATE_3 2.5
int main()
{
	int hour;
	double pur_salary,salary;
	printf("Please input how many hour you work per week:");
	if(scanf("%d",&hour)==1){
		if(hour<=40){
			pur_salary = BASIC_SALARY * hour;
		}else{
			pur_salary = BASIC_SALARY *40 + 
				BASIC_SALARY * OVERTIME_WORK_RATE * (hour - 40);
		}
		if(pur_salary<=300){
			salary = pur_salary * (1-RATE_1);
		}else if(salary<=450){
			salary = pur_salary - 300 * RATE_1 - (pur_salary - 300) * RATE_2;
		}else{
			salary = pur_salary - 300 * RATE_1 - 150 *RATE_2 - (pur_salary - 450) * RATE_3;
		}
	}
	printf("Your SALARY is %.2f.",salary);
	return 0;
}
