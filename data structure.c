#include <stdio.h>
int i;
struct employee{
    char    name[30];
    int     empId;
    int  departmentNo;
    float   salary;
};
 
int main()
{

for(i=0;i<21;i++)
{
    
    struct employee emp;
     
    
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");             scanf("%d",&emp.empId);
	printf("department no-");    scanf("%d",&emp.departmentNo);    
    printf("Salary ?:");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("departmentNo:%d",emp.departmentNo);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
}
