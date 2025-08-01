#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    float PI = 3.1416;
    float lambda_nm, a1, a2, a3, theta1, theta2, theta3;
    printf("Enter order m : ");
    scanf("%d", &m);

    printf("Enter wavelength in nm : ");
    scanf("%f", &lambda_nm);

    float lambda = lambda_nm * 0.000000001;

    printf("Enter three slit widths in micrometer : ");
    scanf("%f %f %f", &a1, &a2, &a3);

    a1 = a1 * 0.000001;
    a2 = a2 * 0.000001;
    a3 = a3 * 0.000001;

    if (lambda_nm < 380 || lambda_nm > 750)
    {
        printf("Out of range. Please enter a valid number.\n");
    }
    else
    {
        theta1 = asin((m*lambda)/a1)*(180/PI);
        theta2 = asin((m*lambda)/a2)*(180/PI);
        theta3 = asin((m*lambda)/a3)*(180/PI);

        printf("Theta1 = %.2f degrees\n", theta1);
        printf("Theta2 = %.2f degrees\n", theta2);
        printf("Theta3 = %.2f degrees\n", theta3);

        if(theta1 > theta2 && theta1 > theta3)
        {
            printf("Slit 1 will bent the light most.\n");
        }
        else if(theta2 > theta1 && theta2 > theta3)
        {
            printf("Slit 2 will bent the light most.\n");
        }
        else
        {
            printf("Slit 3 will bent the light most.\n");
        }

    }
}


