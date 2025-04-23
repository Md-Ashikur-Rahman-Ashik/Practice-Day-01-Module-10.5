#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char inputString[100001];

    scanf("%s", inputString);

    int stringSize = strlen(inputString);

    for (i = 0; i < stringSize; i++)
    {
        /* code */
        if (inputString[i] == 44)
        {
            /* code */
            int converted = 44 - 12;
            printf("%c", converted);
        }
        else if (inputString[i] >= 65 && inputString[i] <= 90)
        {
            /* code */
            int converted = inputString[i] + 32;
            printf("%c", converted);
        }
        else if (inputString[i] >= 97 && inputString[i] <= 122)
        {
            /* code */
            int converted = inputString[i] - 32;
            printf("%c", converted);
        }
        else
        {
            printf("%c", inputString[i]);
        }
    }

    return 0;
}