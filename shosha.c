#include <stdio.h>

int main()
{
    int num1, num2, result;
    char sign;

    printf("enter the first number: ");
    scanf("%d", &num1);

    printf("enter the sign (+, -, *, /): ");
    scanf(" %c", &sign);

    printf("enter the second number: ");
    scanf("%d", &num2);

    switch(sign)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else
            {
                printf("math error\n");
            }
            break;
    }

    printf("%d %c %d = %d\n", num1, sign, num2, result);

    return 0;
}
