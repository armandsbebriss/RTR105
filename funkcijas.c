
#include <stdio.h>

//int a_2 = 0;

void my_first_function();

int my_second_function();

void my_third_function(int in_a_3);

double my_fourth_function(int in_a_4a, int in_a_4b);

int main()
{
     double result_main;
    char a_main;
    
    printf("Hello world! From main fuction.\n");
    
    my_first_function();
    
    printf("Output of second function result %d from main function\n",my_second_function());
    
    a_main = my_second_function();
    
    printf("a_main = %d from main function\n",a_main);
    
    my_third_function(200);
    
    result_main = my_fourth_function(4,5);
    
    printf("result_main = %.3f from main function\n",result_main);
    return 0;
}

void my_first_function()

{
    printf("Hello world! From my first user function.\n");
}

int my_second_function()

{
    int a_2 = 150;
    printf("Hello world! From my first user function.\n");
    printf("a_2 = %d from second function\n",a_2);
    return a_2;
}

void my_third_function(int in_a_3)

{
    printf("Hello world! From my third user function.\n");
    printf("in_a_3 = %d from third function\n",in_a_3);
}

double my_fourth_function(int in_a_4a, int in_a_4b)

{
    double result = (float)in_a_4a / in_a_4b ;
    printf("Hello world! From my fourth user function.\n");
    printf("%d / %d = %.3f from fourth function\n",in_a_4a,in_a_4b,result);
    return result;
}       
