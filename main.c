#include <stdio.h>
int main()
{
    float oringnal_x1,oringnal_z1,oringnal_x2,oringnal_z2;
    float terminal_x1,terminal_z1,terminal_x2,terminal_z2;
    float target_x,target_z;
    float k1,k2,b1,b2;

    while (1)
    {
        scanf("%f %f",&oringnal_x1,&oringnal_z1);
        scanf("%f %f",&terminal_x1,&terminal_z1);
        scanf("%f %f",&oringnal_x2,&oringnal_z2);
        scanf("%f %f",&terminal_x2,&terminal_z2);

        k1=(terminal_z1-oringnal_z1)/(terminal_x1-oringnal_x1);
        k2=(terminal_z2-oringnal_z2)/(terminal_x2-oringnal_x2);
        b1=oringnal_z1-k1*oringnal_x1;
        b2=oringnal_z2-k1*oringnal_x2;
        target_x=(b2-b1)/(k1-k2);
        target_z=k1*target_x+b1;

        printf("x=%f,z=%f\n",target_x,target_z);
    }
}
