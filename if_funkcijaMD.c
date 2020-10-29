#include <stdio.h>

int main()
{
    int a1, a2, a3, s;
    printf("Ievadi trīs decimālus skaitļus\n");
    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);
    printf("Tavi izvēletie skaitļi ir:\n a1 = %d\n a2 = %d\n a3 = %d\n", a1, a2, a3);
    printf("Kādā secībā vēlies kārtot skaitļus? Ievadi vērtību 1 ja dilstošā, vērtību 0 ja augošā\n");
    scanf("%d", &s);
    if(s==1)
    {
        if ((a1 > a2) && (a2 > a3))
        {
         printf("Ievaditie skaitļi dilstošā secībā ir: %d ; %d ; %d\n", a1, a2 ,a3);
        }
        else if ((a1 > a3) && (a3 > a2))
        {
         printf("Ievaditie skaitļi dilstošā secībā ir: %d ; %d ; %d\n", a1, a3 ,a2);
        }
        else if ((a2 > a1) && (a1 > a3))
        {
         printf("Ievaditie skaitļi dilstošā secībā ir: %d ; %d ; %d\n", a2, a1 ,a3);   
        }
        else if ((a2 > a3) && (a3 > a1))
        {
         printf("Ievaditie skaitļi dilstošā secībā ir: %d ; %d ; %d\n", a2, a3 ,a1);
        }
        else if ((a3 > a1) && (a1 > a2))
        {
         printf("Ievaditie skaitļi dilstošā secībā ir: %d ; %d ; %d\n", a3, a1 ,a2);   
        }
        else if ((a3 > a2) && (a2 > a1))
        {
         printf("Ievaditie skaitļi dilstošā secībā ir: %d ; %d ; %d\n", a3, a2 ,a1);   
        }
         else
    {
        printf("Error 404\n");
    }
    }
    else if (s == 0)
    {
        if ((a1 > a2) && (a2 > a3))
        {
         printf("Ievaditie skaitļi augošā secībā ir: %d ; %d ; %d\n", a3, a2 ,a1);
        }
        else if ((a1 > a3) && (a3 > a2))
        {
         printf("Ievaditie skaitļi augošā secībā ir: %d ; %d ; %d\n", a2, a3 ,a1);
        }
        else if ((a2 > a1) && (a1 > a3))
        {
         printf("Ievaditie skaitļi augošā secībā ir: %d ; %d ; %d\n", a3, a1 ,a2);   
        }
        else if ((a2 > a3) && (a3 > a1))
        {
         printf("Ievaditie skaitļi augošā secībā ir: %d ; %d ; %d\n", a1, a3 ,a2);
        }
        else if ((a3 > a1) && (a1 > a2))
        {
         printf("Ievaditie skaitļi augošā secībā ir: %d ; %d ; %d\n", a2, a1 ,a3);   
        }
        else if ((a3 > a2) && (a2 > a1))
        {
         printf("Ievaditie skaitļi augošā secībā ir: %d ; %d ; %d\n", a1, a2 ,a3);   
        }
         else
    {
        printf("Error 404\n");
    }
    }
   

    return 0;
}
