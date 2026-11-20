#include <stdio.h>

int compression(int a[], int b[], int N)
{
	if (N <= 0)
	{
		return 0;
	}

	int *bi = b;
	int sizeb = 0;

	if (*a == 1)
	{
		*bi = 0;
		bi++;
		sizeb++;
	}

	int count = 1;
	
	for (int *i = a; i < (a + N); i++)
	{
		if (*i == *(i+1) && (i + 1) < (a + N))
		{
			count++;
		}
		else
		{
			*bi = count;
			bi++;
			sizeb++;
			count = 1;
		}
		
	}
	

	return sizeb;
}

int main(int argc, char const *argv[])
{
	int arr1[]={0,0,0,1,1,0,1};
	int arr2[]={1,1,1,1,1,0,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,1,1};

	int s1=sizeof(arr1)/sizeof(*arr1);
	int s2=sizeof(arr2)/sizeof(*arr2);

	int comp1[s1], comp2[s2];

	int count = compression(arr1,comp1,s1);

	printf("\nCompressed arr1:\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d ", comp1[i]);
	}

	printf("\n");

	count = compression(arr2,comp2,s2);

	printf("\nCompressed arr2:\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d ", comp2[i]);
	}
	

	return 0;
}
