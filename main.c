#include <stdio.h>

int sum_func(int a,int b)
{
    return a+b;

}


int main(void)
{
    int a = 10;
    int b = 5;
    int c = 0;

    c = sum_func(a,b);
    
    printf("c is %d\n", c);

    return (0);
}