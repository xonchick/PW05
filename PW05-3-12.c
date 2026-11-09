#include <stdio.h>

int main()
{
    
    int n=1;
    while (n>0)
    {
        double s=0; //испольуем double для того, чтобы если вдруг будет плюсоваться дробное число, дробный остаток не отбросился
        scanf("%d",&n);
        for (int i=1;i<=n;i++)
        {
            s=s+(i*i*i);

        }
        printf("%f", s);
    }
    
    
}