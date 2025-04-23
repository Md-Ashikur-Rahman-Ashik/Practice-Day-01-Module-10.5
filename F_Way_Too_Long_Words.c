#include <stdio.h>
#include <string.h>

int main()
{
    int array_size, i, stringLength;

    scanf("%d", &array_size);

    char arr[101];

    for (i = 0; i <= array_size; i++)
    {
        /* code */
        gets(arr);

        // fgets(arr[i], 1000000000, stdin);
        stringLength = strlen(arr);

        if (stringLength < 10)
        {
            printf("%s\n", arr);
        }
        else
        {
            printf("%c%d%c\n", arr[0], stringLength - 2, arr[stringLength - 1]);
        }
    }

    return 0;
}