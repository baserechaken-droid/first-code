#include<stdio.h>
int main()
{
    int a, b,c,d,e,f,g,h ;
    float av;


printf(" Course grader \n");
printf("Input your grades\n");

printf("APH 109: \n");
scanf("%d", &a);

printf("ACH 118: \n");
scanf("%d", &b);

printf("AMM 123: \n");
scanf("%d", &c);

printf("EMS 101: \n");
scanf("%d", &d);

printf("EMS 102: \n");
scanf("%d", &e);

printf("EMS 204: \n");
scanf("%d", &f);

printf("SCS 101: \n");
scanf("%d", &g);

printf("EMS 112: \n");
scanf("%d", &h);

av = (a+b+c+d+e+f+g+h)/8.0;

printf("Your average is: %1.2f\n",av);

if (av>=0 && av<=30)
printf("Your grade is E");

else if (av>30 && av<=50 )
printf("Your grade is D");

else if (av>50 && av<=60)
printf("Your grade is C");

else if (av>60 && av<=70)
printf("Your grade is B");

else if (av>70 && av<=100)
printf("Your grade is A ");


else
printf("Invalid input");



return 0;
}
