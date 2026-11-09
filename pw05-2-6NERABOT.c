#include <stdio.h>

#define HEIGHT 5

int main()
{
    int i=0;
    int seredina =HEIGHT/2.0+0.5;
    int z = HEIGHT;

    for (i;i<HEIGHT;i++)
    {   
        int k=0;
        if (i<=seredina)
        {
            for (int p=0;p<i;p++)
            {
                    printf(" ");
            }
        }


        for
        if (z > 0)
        {
            for (int p=0;p<z;p++)
            {
                k++
                printf("&");
            }
            z=z-2;
        }
        else
        {
            z=z+2;
            for (int p=0;p<z;p++)
            {
                printf("&");
            }
            
        }
        printf("\n");
    }


}