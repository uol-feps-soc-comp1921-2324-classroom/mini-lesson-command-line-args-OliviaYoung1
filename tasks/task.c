#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        printf("Enter exactly 2 numbers\n");
        return 0;
    }

    for (int a = 1; a < 3; a++)
    {
    for (int i = 0; i < strlen(argv[a]); i++)
    {
        if (!isdigit(argv[a][i]))
        {
            printf("Enter integers only\n");
            return 0;
        }
    }
    }


int sum = atoi(argv[2]) + atoi(argv[1]);
printf("Sum: %d\n", sum);

return 0; // Exit successfully
}
