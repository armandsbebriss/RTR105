#include <stdio.h>

void bez_arg_bez_ret()
{
    int a = 2, b = 3, c;
    c = a + 5;
    printf("(Bez argumenta un bez return) Summa ir %d\n", c);
}

int bez_arg_ar_ret()
{
    int ret = 7;
    printf("(Bez argumenta bet ar return) return vertiba ir %d\n", ret);
    return ret;
}

int ar_arg_bez_ret(int arg)

{
    printf("(Ar argumentu bet bez return) Argumenta vērtība ir %d\n", arg);
}

void ar_arg_ar_ret(int x, int y, int z)

{
    int argret = x + y + z;
    printf("(Ar argumentu un return vērtību) Summa ir %d", argret);
    return argret;
}

int main()
{
    bez_arg_bez_ret();
    ar_arg_bez_ret(15);
    bez_arg_ar_ret();
    ar_arg_ar_ret(18, 22, 56);

    return 0;
}