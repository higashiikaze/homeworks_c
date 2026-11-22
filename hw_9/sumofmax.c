#include <stdio.h>

#define SIZE 10

int sum_of_max(int n, int a[])
{
    int max = *a;

    for (int *i = a + 1; i < a + n; i++)
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
    int arr[SIZE][SIZE]/*=
    {
        {1,1,2,2,10,3,3,4,4,5},
        {2,2,2,2,4,4,4,4,4,8},
        {1,1,2,2,1,1,2,2,1,4},
        {1,1,7,2,2,3,3,1,1,1},
        {9,9,9,9,9,9,9,9,9,9},
        {5,2,1,3,4,1,2,3,6,5},
        {1,2,3,2,1,1,2,1,1,2},
        {2,2,4,4,5,5,1,1,5,7},
        {2,2,7,4,6,6,1,0,1,0},
        {6,5,4,3,2,8,2,3,4,5}
    }*/;

    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &arr[i][j]);
        }       
               
    }

    for (int i = 0; i < SIZE; i++)
    {
        int b[SIZE];

        for (int j = 0; j < SIZE; j++)
        {
            b[j] = arr[i][j];
        }
        sum+= sum_of_max(SIZE, b);
    }
    
    printf("\n%d\n\n", sum);

    return 0;
}
