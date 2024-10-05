#include <math.h>
#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}

