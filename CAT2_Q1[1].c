// CAT question one
// Author-Ruth Williams 
// Date 7/11/2024
#include <stdio.h>
#include <string.h>
struct employee {
char name[25];
float salary;
char email[50];
char department[20];
int id;
}employee;
int main(){
strcpy(employee.name,"John Doe");
employee.salary=55000.50;
strcpy(employee.email,"John.doe@company.com");
strcpy(employee.department,"Human Resources");
employee.id=12345;
printf("name:%s\n",employee.name);
printf("salary:%.2f\n",employee.salary);
printf("email:%s\n",employee.email);
printf("department:%s\n",employee.department);
printf("id:%d\n",employee.id);
return 0;
}