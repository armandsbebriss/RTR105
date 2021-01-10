# 1. laboratorijas darbs - Teilora rindas - atskaite

## Teorija

Teilora rindas ir matemātiska metode, kuras izmantošana atļauj datoriem aprēķināt funkciju vērtības trigonometriskām un eksponenciālām funkcijām. 

### Kods
```

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
char *atanx_izteiksme = 
"                                                                                            \n"
"                           500                                                              \n"
"                           _____                                      k                     \n"
"                         \\                                   /     2 \\                    \n"
"         ~     x          \\             (2 * k)!            /     x   \\                   \n"
" atan(x) - __________  *    >     ______________________ * | _________ |  , kur -oo < x < oo\n"
"             ________      /        2     k                |       2   |                    \n"
"            /     2       /_____  (k)! * 4 * (2 * k + 1)   \\  1 + x   /                    \n"
"         \\/ 1 + x          k=0                              \\        /                  \n\n";

char *rekurences_reiz = 
"                   2            2        \n"
"        (2 * k - 1)           x          \n"
" R = ___________________ * ________      \n"
"                                 2       \n"
"      2 * k *(2 * k + 1)    1 + x        \n";
double atanx(double x) {
double a, S;
 int k=0;
a = (x)/sqrt(1+pow(x,2))*1;
S = a;
printf("a0 = %.8f\t \tS0 = %.8f\n", a, S);
   while (k<501){
    k++;
    a = a*pow((2*k-1),2)/((2*k+1)*(2*k))*(pow(x,2)/(1+pow(x,2)));
    S = S + a ;
       if (k == 499)
       {
          printf("a499 = %.8f\t S499 = %.8f\n", a, S);
       }
       if (k == 500)
       {
           printf("a500 = %.8f\t S500 = %.8f\n", a, S);
       }
    } 
return S ;
}

 void main() 
 {
	double x = 0, y;
	printf("atan(x) aprekinasana:\n");
	printf("Ievadi argumentu x (obligaati ar vismaz vienu ciparu aiz komata!): ");
	scanf("%lf\n", &x);
	printf("\nMans arctan = %.8f\n", atanx(x));
	y = atan(x);
	printf ( "arctan no math.h: y = arctan (%.2f )=%.8f \n" ,x , y);
	printf("atan(x) izteiksme:\n");
	printf("%s", atanx_izteiksme);
	printf("Rekurences reizinatajs:\n");
	printf("%s", rekurences_reiz);
}

```


### Rezultāts
```

atan(x) aprekinasana:                                                                                                                           
Ievadi argumentu x (obligaati ar vismaz vienu ciparu aiz komata!): 1,3                                                                          
a0 = 0.70710678         S0 = 0.70710678                                                                                                         
a499 = 0.00000000        S499 = 0.78539816                                                                                                      
a500 = 0.00000000        S500 = 0.78539816                                                                                                      
                                                                                                                                                
Mans arctan = 0.78539816                                                                                                                        
arctan no math.h: y = arctan (1.00 )=0.78539816                                                                                                 
atan(x) izteiksme:                                                                                                                              
                                                                                                                                                
                           500                                                                                                                  
                           _____                                      k                                                                         
                         \                                   /     2 \                                                                          
         ~     x          \             (2 * k)!            /     x   \                                                                         
 atan(x) - __________  *    >     ______________________ * | _________ |  , kur -oo < x < oo                                                    
             ________      /        2     k                |       2   |                                                                        
            /     2       /_____  (k)! * 4 * (2 * k + 1)   \  1 + x   /                                                                         
         \/ 1 + x          k=0                              \        /                                                                          
                                                                                                                                                
Rekurences reizinatajs:                                                                                                                         
                   2            2                                                                                                               
        (2 * k - 1)           x                                                                                                                 
 R = ___________________ * ________                                                                                                             
                                 2                                                                                                              
      2 * k *(2 * k + 1)    1 + x
```

### Secinājumi

Kods izpildās pareizi un reprezentē visas prasības. Links uz onlinegdb vidē veidotu kodu: https://onlinegdb.com/r16FCuDCw
