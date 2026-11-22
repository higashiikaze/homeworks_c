#include <stdio.h>

#define SIZE 5

int quan_more(int n, int *a)
{
    int quan = 0;
    int middle = 0;
    

    //найдём среднее арифметическое элементов главной диагонали    
    for (int i = 0; i < SIZE; i++)
    {
        middle+= *(a + i * (SIZE + 1));
    }
    int mean = middle / SIZE;

    for (int *i = a; i < a + SIZE*SIZE; i++)
    {
        if (mean < *i)
        {
            quan++;
        }        
    }    
    
    return quan;
}

int main(int argc, char const *argv[])
{
    int arr[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    

    printf("%d", quan_more(SIZE,&arr[0][0]));
    return 0;
}
