#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/*HARVY JONES PONTILLAS DICT 1-2*/

int main()
{   float gsales, tsalary, salary;
    tsalary=0;

    while(gsales!=-1)
    {   p("ENTER SALES IN DOLLAR(-1 TO END): ");
        s("%f",&gsales);
        if(gsales==-1)
        {
            break;
        }
        salary=200+(gsales*.09);
        p("SALARY: $%.2f\n",salary);
        p("\n");
        tsalary=tsalary+salary;
    }
    p("\nTHE TOTAL SALARY FOR THE WEEK: $%.2f\n",tsalary);
    p("GOOD DAY! THANK YOU FOR USING THE SYSTEM!");
getch();
    return 0;
}
