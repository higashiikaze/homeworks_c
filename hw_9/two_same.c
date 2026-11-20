#include <stdio.h>

/* функция определяет, есть ли в массиве 2 одинаковых элемента
и, если это так, выводит 1; если двух одинаковых цифр нет выводит 0 */

int is_two_same(int size, int a[])
{
	int answ = 0;
	for (int *i = a; i < a + size; i++)
	{
		int same = 1;
		for (int *j = i + 1; j < a + size; j++)
		{
			if (*i == *j)
			{
				same++;
			}			
		}	
		if (same > 1)
		{
			answ = 1;
		}
		
	}
	return answ;
	
	
}

int main(int argc, char const *argv[])
{
	int arr[] = {1,3,2,5,48,9,11,4};

	int s = sizeof(arr) / sizeof(*arr);

	printf("\n%d\n\n",is_two_same(s,arr));

	return 0;
}
