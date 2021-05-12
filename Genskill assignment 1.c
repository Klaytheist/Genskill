#include <stdio.h>
#include <cs50.h>

int main(void) {
    int a,b;
    a = get_int("First number ");
    b = get_int("Second number ");
    printf("Average is %f\n",(float)(a+b)/2);
    return 0;
}
