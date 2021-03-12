#include<stdio.h>

int main()
{

    int a, b, add, sub, mul, mod;
    float div ;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    add = a+b;
    sub = a-b;
    mul = a*b;
    div = (float) a/b;
    mod = a%b;

    printf("\n");
    printf("Addtion of a and b is: %d\n", add);
    printf("Subtraction of a and b is: %d\n", sub);
    printf("Multiplication of a and b is: %d\n", mul);
    printf("Division of a and b is: %.2f\n", div);
    printf("Modulus of a and b is: %d\n", mod);


}
