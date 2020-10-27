#include <stdio.h>
int main()
{
 double a,b,c;
 printf("Ievadi skaitli 400000\n");
 scanf("%lf" ,&a);
 printf("Ievadi skaitli 100000\n");
 scanf("%lf" ,&b);
 c = a * b;
 printf("Reizinājums ir %.0lf \n" , c);
return 0;

}