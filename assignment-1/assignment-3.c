#include<stdio.h>

int a, b, c, avg;
int total = 0;

int main()
{
    printf("\tReport Card \n===========================\n");
    ReportCard();
    return 0;
}

int ReportCard()
{
    int i;
    for(i=1; i<=5; i++)
    {
        printf("Student-%d",i, "\n");
        printf("\n\tBangla: ");
        scanf("%d", &a);
        printf("\tEnglish: ");
        scanf("%d", &b);
        printf("\tMath: ");
        scanf("%d", &c);
        int total =  a+b+c;
        float avg = (float) total/3;
        printf("Total: %d\n", total);
        printf("Average: %.2f\n", avg);
        printf("===========================");
        printf("\n");
    }
}
