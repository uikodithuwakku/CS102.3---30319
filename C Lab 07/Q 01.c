#include <stdio.h>
int main()
{
    int no[10],i,sum=0,min,max;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("Enter the %d number : ",i+1);
        scanf("%d",&no[i]);
        sum = sum + no[i];
        min= no[0];
        max = no[0];
        if(no[i]>max)
        max= no[i];
        if(no[i]<min)
        min = no[i];
    }
    avg = (float)sum/ 10;
    printf("Minimum value is %d\n",min);
    printf("Maximum value is %d\n",max);
    printf("Average value is %.2f\n",avg);
    for(i=9;i>=0;i--)
    {
        printf("Reverse order of values is %d\n",no[i]);
    }

}
