#include <stdio.h>

int main ()

{
    char a,b,c;
    printf("Ievadi decimalo skaitli, kuru gribi parveidot\n");
    scanf("%d", &a);
    printf("Izveletais skaitlis binaraja sistema ir ");
    for (b=7; b>=0; b--)
    
    {
        c=a >> b;
        if (c &1)
        printf("1");
        else
        printf("0");
    }
    return 0;
}
