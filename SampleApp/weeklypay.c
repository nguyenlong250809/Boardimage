#include <stdio.h>

int main()
{
    double hours = 0.0;
    double pay;
    double overtime = 0.0;
    double gross;
    double net;
    double tax = 0.0;

    printf("Enter the number of hours worked: ");
    scanf("%lf", &hours);

    if (hours > 40)
    {
        overtime = (hours - 40.0) * 1.5;
    }
    pay = 12.0 * (overtime + 40);

    if (pay <= 300)
    {
        tax = pay * 0.15;
    }
    else if (pay > 300 && pay <=450)
    {
        tax = 300 * 0.15 + (pay - 300) * 0.2;
    }
    else if (pay > 450)
    {
        tax = 300 * 0.15 + (pay - 300) * 0.2  + (pay - 450) * 0.25;
    }

    gross = pay;
    net = gross - tax;
    printf("Your gross pay: %f\n", gross);
    printf("Your tax pay: %f\n", tax);
    printf("Your net pay: %f\n", net);
}
