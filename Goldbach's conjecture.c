#include <stdio.h>
#include <stdlib.h>

int* SieveOfEratosthenes (int limit)
{
    int arr[limit-2];
    for(int i=0; i<limit-2; i++)
    {
        arr[i]=i+2;
    }
    for(int i=0; i<limit-2; i++)
    {
        if(arr[i]>0)
        {
            for(int j=i+arr[i]; j<limit-2; j+=arr[i])
            {
                arr[j]=0;

            }
        }
    }
    int * p=&arr[0];
    return  p;

}

int main ()
{
    int num=-1;
    while(num<0 || num%2!=0)
    {
        printf("Enter an even number greater than 2 to see 2 prime numbers which make its sum.: ");
        scanf("%d", &num);
        int * ptr= SieveOfEratosthenes(num);
        for (int i=0; i < num-2; i++)
        {
            if(*(ptr+i)>0)
            {
                for(int j=i+1; j<num-2; j++)
                {
                    if(*(ptr+i)+*(ptr+j)==num)
                    {
                        printf("The numbers are %d %d",  *(ptr+i), *(ptr+j));
                        return 0;
                    }
                    else {continue;}
                }
            }
        }

    }

    return 0;
}
