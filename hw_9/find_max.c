#include <stdio.h>

int find_max_array(int size, int a[])
{
	int max = *a;
	for (int *i = a + 1; i < a + size; i++)
	{
		if (*i > max)
		{
			max = *i;
		}	
				
	}	

	return max;
}

int main(int argc, char const *argv[])
{
	int arr[] = {111,121,56,82,14,1100,5,59,9,785,241,569,5555,21,2,10};

	int size = sizeof(arr) / sizeof(*arr);

	printf("\nMax = %d\n", find_max_array(size,arr));

	return 0;
}
