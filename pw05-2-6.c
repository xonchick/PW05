#include <stdio.h>

#define HEIGHT 5

int main()
{
    int i=0;
    double seredina =HEIGHT/2.0;
    int kz = HEIGHT+2;
    int kp = -1;


    for (i;i<HEIGHT;i++)
    {   
        if (i<seredina)
        {
            kp=kp+1;
            kz=kz-2;
            for (int p=0;p<kp;p++)
            {
                printf(" ");
            }
            for (int p=0;p<kz;p++)
            {
                printf("&");
            }

        }

        if (i>seredina)
        {
            kp=kp-1;
            kz=kz+2;
            for (int p=0;p<kp;p++)
            {
                printf(" ");
            }
            for (int p=0;p<kz;p++)
            {
                printf("&");
            }
            

        }
        
        printf("\n");
    }


}