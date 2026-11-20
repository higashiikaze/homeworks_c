#include <stdio.h>

void sort_array(int size, int a[])
{
    int *last = a + size;

    for (int step = size/2; step > 0; step/=2)		//аутентичная сортировка Шелла
	{
		for (int *i = a + step; i < last; i++)
		{
			int temp = *i;

			int *j =i;

			while (j >= a + step && *(j-step)>temp)
			{
				*j = *(j - step);
				j-=step;
			}
			*j = temp;
			
		}
		
	}
}

int main(int argc, char const *argv[])
{
    int arr[]={9,4,7,1,6,8,2,5};

    int arr_size = sizeof(arr)/sizeof(*arr);

    sort_array(arr_size, arr);

    printf("\n");

    for (int *i = arr; i < arr + arr_size; i++)
    {
        printf("%d ",*i);
    }
    printf("\n");
    
    return 0;
}



