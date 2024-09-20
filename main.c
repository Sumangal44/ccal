#include <stdio.h>
#include <conio.h>

void displayBanner();
void sum(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);
void rem(int a, int b);

int main()
{
    int a, b, choice;
    while (1) // Add loop to keep asking for inputs until exit is chosen
    {
        // Display the banner at the start
        displayBanner();

        printf("Enter your choice\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n6.Exit\n");
        scanf("%d", &choice);

        if (choice == 6) // Exit condition
        {
            break;
        }

        if (choice < 1 || choice > 6)
        {
            printf("Select within the range!\n");
            continue; // Go back to the menu if choice is invalid
        }

        printf("Enter two integer numbers\n");
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
            div(a, b);
            break;
        case 5:
            rem(a, b);
            break;
        default:
            printf("You entered a wrong choice\n");
            break;
        }
    }
    return 0;
}
