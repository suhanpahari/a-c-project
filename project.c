#include <stdio.h>
#include "cm_2.h"

extern int add(int a,int b);
extern int sub(int a,int b);

int main(){

    int a = 13, b = 5, res_1, res_2, res_3;
    float res_4;

    res_1 = add(a,b);
    printf("res_1: %d\n", res_1);

    res_2 = sub(a,b);
    printf("res_2: %d\n", res_2);

    res_3 = mul(a,b);
    printf("res_3: %d\n", res_3);

    res_4 = div(a,b);
    printf("res_4: %.2f", res_1);

    return 0;



}
