#include <stdio.h>
#include <stdlib.h>
int n, a, b;
int Addition(int a, int b)
{
    int c = a + b;
    printf("Result: %d", c);
    return c;
}
int Subtraction(int a, int b)
{
    int c = a - b;
    printf("Result: %d", c);
    return c;
}
int Multiplication(int a, int b)
{
    int c = a * b;
    printf("Result: %d", c);
    return c;
}
int Division(int a, int b)
{
    int c = a / b;
    printf("Result: %d", c);
    return c;
}
int condition(int n)
{
    switch (n)
    {
    case 1:
    	system("cls");
        printf("\nADDITION");
        printf("\nEnter two numbers ");
        scanf("%d %d", &a, &b);
        Addition(a, b);
        break;
    case 2:
    	system("cls");
        printf("\nSUBTRACTION");
        printf("\nEnter two numbers ");
        scanf("%d %d", &a, &b);
        Subtraction(a, b);
        break;
    case 3:
    	system("cls");
        printf("\nDIVIDE");
        printf("\nEnter two numbers ");
        scanf("%d %d", &a, &b);
        Division(a, b);
        break;
    case 4:
    	system("cls");
        printf("\nMULTIPLICATION");
        printf("\nEnter two numbers ");
        scanf("%d %d", &a, &b);
        Multiplication(a, b);
        break;
    case 5:
    	system("cls");
        printf("THANK YOU");
        break;
    default:
    	system("cls");
        printf("Invalid input..... \n Try again....");
    }
}
void main()
{
    printf("\tCALCULATOR");

    while (n != 5)
    {
		
        printf("\n\nEnter your choice");
        printf("\n1) ADDITION \t2) SUBTRACTION \n3) DIVIDE \t4) MULTIPLICATION \n\t 5) EXIT\n");
        scanf("%d", &n);
        condition(n);
    }
}
    