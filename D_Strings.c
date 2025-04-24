#include <stdio.h>
#include <string.h>

int main()
{
    char firstArray[11];
    char secondArray[11];

    scanf("%s\n%s", firstArray, secondArray);

    int firstArrayLength = strlen(firstArray);
    int secondArrayLength = strlen(secondArray);

    printf("%d %d\n", firstArrayLength, secondArrayLength);
    printf("%s%s\n", firstArray, secondArray);

    char i = firstArray[0];
    char j = secondArray[0];

    firstArray[0] = j;
    secondArray[0] = i;

    printf("%s %s", firstArray, secondArray);

    return 0;
}