#include <stdio.h>

/*Функция вывода цифр, содержащихся в строке, в порядке возрастания с указанием количества вхождений*/

void print_digit(char s[])
{
	int size = 0;

	//подсчет количества цифр в строке

	for (char *i = s; *i != '\0'; i++)
	{
		if (*i >= '0' && *i <= '9')
		{
			size++;
		}		
	}

	//если в строке есть цифры..

	if (size > 0)
	{
		//..создать и заполнить цифрами массив

		int digs[size];
		int *j = digs;

		for (char *i = s; *i != '\0'; i++)
		{
			if (*i >= '0' && *i <= '9')
			{
				*j = *i - '0';
				*j++;
			}
		}	

		//сортировка массива с цифрами по возрастанию
		int *last = digs + size;

    	for (int step = size/2; step > 0; step/=2)
		{
			for (int *i = digs + step; i < last; i++)
			{
				int temp = *i;
				int *j =i;

				while (j >= digs + step && *(j-step)>temp)
				{
					*j = *(j - step);
					j-=step;
				}
				*j = temp;
			
			}
		
		}
		/*
		for (int *i = digs; i < digs + size; i++)
		{
			printf("%d ", *i);
		}
		*/

		//вывод цифр в порядке возрастания и их количества в строке

		printf("\n");

		int shift = 1;

		for (int *i = digs; i < digs + size; i+=shift)
		{
			int temp = *i;
			int count = 1;
			for (int *j = i+1; j < digs + size; j++)
			{
				if (*j == temp)
				{
					count++;
				}
				
			}
			printf("%d %d\n", temp, count);

			shift = count;
			
		}
		
		
				
	}
	
	printf("\n");
	
}

int main(int argc, char const *argv[])
{
	char str[]={"He99l1lo123 w4orld77."};

	print_digit(str);

	return 0;
}
