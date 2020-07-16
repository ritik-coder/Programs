#include <stdio.h>
int main()
{
    char input;
    float kmtometer = 1000;
    float kmstomiles = 0.621371;
    float mtocm = 100;
    float inchestofoot = 0.0833333;
    float cmtoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometres = 0.0254;
    float first, second;
    while (1)
    {
        printf("Enter the iput character: q to quit\n 1. kms to meter\n 2. km to miles\n 3. m to cm\n 4. inches to foot\n 5. cm to inches\n 6. pound to kgs\n 7. inches to metres\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program.....\n");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmtometer;
            printf("%f Kilometer is equal to %f Meter\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%f Kilometer is equal to %f Miles\n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * mtocm;
            printf("%f Meter is equal to %f Centimeter\n", first, second);
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f Inches is equal to %f Foot\n", first, second);
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmtoinches;
            printf("%f Centimeter is equal to %f Inches\n", first, second);
            break;

        case '6':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%f Pound is equal to %f Kilograms\n", first, second);
            break;

        case '7':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestometres;
            printf("%f Inches is equal to %f Meters\n", first, second);
            break;

        default:
            break;
        }
    }

end:
    return 0;
}