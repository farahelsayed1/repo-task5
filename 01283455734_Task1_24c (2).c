#include<stdio.h>

int main()
{
    int i;
    float sum=0,avg=0;
    float arr1[10] = {0.0, 11.68, 18.95, 23.56, 25.72, 25.38, 22.65, 18.01, 10.14, -0.26};
    float arr2[10] = {0.0,9.49, 16.36, 21.2, 23.16, 22.8, 19.5, 14.85, 6.79, -2.69};
    float avg_arr[10];
   for(i=0;i<10;i++)
   {
       arr1[i]=arr1[i]*0.79;
       arr2[i]=arr2[i]*0.92;
   }
    for(i=0;i<10;i++)
    {
        sum=arr1[i]+arr2[i];
         avg=sum/1.71;
         avg_arr[i]=avg;
    }
    for(i=0;i<10;i++)
    {
        printf("%0.2f\n",avg_arr[i]);
    }
}
