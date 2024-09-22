#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// ANSI color codes
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m" // Reset color

void displayBanner();
void sum(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void divi(int a, int b);
void rem(int a, int b);

int main()
{
    int a, b, choice;
    system("cls");

    while (1) // Add loop to keep asking for inputs until exit is chosen
    {
        // Display the banner at the start
        displayBanner();

        printf(YELLOW "Enter your choice\n" RESET);
        printf(GREEN "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n6.Exit\n" RESET);
        scanf("%d", &choice);

        if (choice == 6) // Exit condition
        {
            printf(CYAN "Exiting the program.....\n" RESET);
            break;
        }

        if (choice < 1 || choice > 6)
        {
            printf(RED "Select within the range!\n" RESET);
            continue; // Go back to the menu if choice is invalid
        }

        printf(YELLOW "Enter two integer numbers\n" RESET);
        scanf("%d%d", &a, &b);

        switch (choice)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            divi(a, b);
            break;
        case 5:
            rem(a, b);
            break;
        default:
            printf(RED "You entered a wrong choice\n" RESET);
            break;
        }
    }
    return 0;
}
// Function to display a banner
void displayBanner()
{
    printf(BLUE "***************************************\n" RESET);
    printf(MAGENTA "*          BASIC CALCULATOR           *\n" RESET);
    printf(MAGENTA "*         Made in C Language          *\n" RESET);
    printf(BLUE "***************************************\n" RESET);
}
void sum(int a, int b)
{
    printf(GREEN "%d + %d = %d\n" RESET, a, b, a + b);
}
void sub(int a, int b)
{
    printf(GREEN "%d - %d = %d\n" RESET, a, b, a - b);
}

void mul(int a, int b)
{
    printf(GREEN "%d * %d = %d\n" RESET, a, b, a * b);
}

void divi(int a, int b)
{
    if (b != 0)
    {
        printf(GREEN "%d / %d = %d\n" RESET, a, b, a / b);
    }
    else
    {
        printf(RED "Division by zero is not allowed!\n" RESET);
    }
}
void rem(int a, int b)
{
    if (b != 0)
    {
        printf(GREEN "%d %% %d = %d\n" RESET, a, b, a % b);
    }
    else
    {
        printf(RED "Modulus by zero is not allowed!\n" RESET);
    }
}
