#include<stdio.h>
#include<math.h>

  float PI = 3.1416 ;

int main ()
{
    int mg=3, mr= 2;
    float lamdag = 530;
    float thetag_deg = 65;
    float lamdar= 700;

    float thetag_red = thetag_deg*(PI/180);
    float d =( mg*lamdag)/sinf(thetag_red);

    float sin_thetar=(mr*lamdar)/d;

    if(sin_thetar>1)
    {
        printf("no second order maximum for red light.(sin_theta>1\n");

    }
    float thetar_rad = asin(sin_thetar);
    float thetar_deg = thetar_rad * (180/PI);

    printf("third order green line gives d = %f nm\n",d);
    printf("second order rad light =%f deg\n",thetar_deg );

    return 0;

}
