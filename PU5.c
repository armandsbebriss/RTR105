#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int datatype, i = 1, n = 1, sk;
long long l = 1;
int main () 
{
printf 
    ("Ievadi decimalu skaitli no kura velies aprekinat faktorialu\n");
scanf ("%d", &sk);
printf 
    ("Izvelies datu tipu ar kuru gribi aprekinat:\nchar - 1 \nint - 2 \nlong long - 3\n");
scanf ("%d", &datatype);
if (sk < 0)
    {
printf ("Faktorials eksiste tikai pozitiviem skaitliem vai 0\n");
    }
    
if (datatype == 1)
    {
      printf("Nav iespejams noteikt faktorialu datutipam char\n");
    }
if (datatype == 2)
    {
if (sk >= 8)
	{
printf 
	    ("Faktorials ievaditajam skaitlim neatbilst izveleta datu tipa robezam\n");
    }
      else
	      {
         for (i; i <= sk; i++)
	        {
                n = n * i;
            }
           printf ("Faktorials no skaitla %d ir %d\n", sk, n);
          }
    }
if(datatype == 3)    
    {
if (sk >= 20 )
	{
printf 
	    ("Faktorials ievaditajam skaitlim neatbilst izveleta datu tipa robezam\n");
    }
      else
	      {
         for (i; i <= sk; i++)
	        }
                l = l * i;
            }
           printf ("Faktorials no skaitla %d ir %lld\n", sk, l);
          }
    }
return 0;
}


