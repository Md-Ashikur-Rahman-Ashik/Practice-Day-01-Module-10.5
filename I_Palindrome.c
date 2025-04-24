#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, count = 0;
    char stringArray[1001];

    // scanf("%d", array_size);
    scanf("%s", stringArray);

    int j = strlen(stringArray) - 1;

    int dividend = strlen(stringArray) / 2;
    // printf("%d", dividend);

    // printf("%c", stringArray[j]);
    while (i < j)
    {
        /* code */
        if (stringArray[i] == stringArray[j])
        {
            /* code */
            count++;
        }

        i++;
        j--;
    }

    if (dividend == count)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}