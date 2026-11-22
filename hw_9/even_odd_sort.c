#include <stdio.h>

void sort_even_odd(int n, int a[])
{
    int *end = a + n;
    int *past = a;
    
    for (int *i = a; i < end; i++)
    {
        if (*i % 2 == 0)
        {
            if (i != past)
            {
                int temp = *i;
                
                for (int *j = i; j > past; j--)
                {
                    *j = *(j-1);
                }

                *past = temp;
                
            }
            past++;
            
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[]={111,2,47,6,8,7,11,10,100,52,16,91,81,2,3,17,21,23,26,258,51,978};
    int size = sizeof(arr)/sizeof(*arr);

    printf("\n");
    printf("Size of array: %d\n", size);

    printf("Original Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    sort_even_odd(size,arr);

    printf("\n\nTransformiertes Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
