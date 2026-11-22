#include <stdio.h>

#define SIZE 10

void change_even_odd(int n, int a[])
{
    int quan_even = 0;
    int quan_odd = 0;

    int *end = a + n;

    for (int *i = a; i < end; i++)
    {
        if (*i % 2 == 0)
        {
            quan_even++;
        }
        else quan_odd++;
        
    }
/*
    printf("Quantity of evens: %d\n", quan_even);
    printf("Quantity of odds: %d\n", quan_odd);
*/
    if (quan_even > quan_odd)
    {
        for (int *i = a; i < end; i++)
        {
            if (*i % 2 != 0)
            {
                int temp = 1;

                while (*i > 0)
                {
                    int rest = *i % 10;
                    
                    if (*i % 2 != 0)
                    {
                        temp*= rest;
                    }

                    *i/=10;
                }
                
                *i = temp;                
            }            
        }        
    }
    else
    {
        for (int *i = a; i < end; i++)
        {
            if (*i % 2 == 0)
            {
                int temp = 1;

                while (*i > 0)
                {
                    int rest = *i % 10;
                    if (rest % 2 == 0)
                    {
                        temp*= rest;
                    }
                    
                    *i/=10;
                }
                
                *i = temp;                
            }            
        }
    }    
}

int main(int argc, char const *argv[])
{
    int arr[SIZE]/*={22,21,56,57,59,91,93,97,99}*/;
    
    for (int j = 0; j < SIZE; j++)
    {
        scanf("%d", &arr[j]);
    }
/*        
    printf("\nOrigin array:\n");

    for (int *i = arr; i < arr + SIZE; i++)
    {
        printf("%d ", *i);
    }

    printf("\n");
*/    

    change_even_odd(SIZE, arr);

    
    //printf("\nChanged array:\n");

    for (int *i = arr; i < arr + SIZE; i++)
    {
        printf("%d ", *i);
    }

    //printf("\n");
    

    return 0;
}
