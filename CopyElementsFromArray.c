#include <stdio.h>

int main()
{
    int first_array_size, i;

    scanf("%d", &first_array_size);

    int firstArray[first_array_size];

    for (i = 0; i < first_array_size; i++)
    {
        /* code */
        scanf("%d", &firstArray[i]);
    }

    int second_array_size, j;

    scanf("%d", &second_array_size);

    int secondArray[second_array_size];

    for (j = 0; j < second_array_size; j++)
    {
        /* code */
        scanf("%d", &secondArray[j]);
    }

    int third_array_size = first_array_size + second_array_size;

    int thirdArray[third_array_size];

    for (int k = 0; k <= first_array_size ; k++)
    {
        /* code */
        thirdArray[k] = firstArray[k];
    }

    int l = 0;

    for (int k = first_array_size; k < third_array_size; k++)
    {
        /* code */
        thirdArray[k] = secondArray[l];

        l++;
    }

    for (int k = 0; k < third_array_size; k++)
    {
        /* code */
        printf("%d ", thirdArray[k]);
    }

    return 0;
}