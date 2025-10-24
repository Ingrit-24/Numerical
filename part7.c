#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char alfabet[28] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', '\n'};

char create(int *mem, int random, int *ind, int *ind2)
{
    int border = 0;
    int i = 0;
    while (1)
    {
        border += mem[i];
        if (random < border)
        {
            *ind = *ind2;
            *ind2 = i;
            return alfabet[i];
        }
        i++;
    }
}

int main(void)
{

    srand((unsigned int)time(NULL));

    FILE *fp;
    int counts[28][28][28];
    char gomi[4] = {
        '\0',
    };

    fp = fopen("part6.csv", "r");
    if (fp == NULL)
    {
        printf("ERROR");
        return 1;
    }
    char str[64];

    int sums[28][28] = {
        {
            0,
        },
    };

    for (int i = 0; i < 28; i++)
        for (int j = 0; j < 28; j++)
            for (int k = 0; k < 28; k++)
            {
                fgets(str, sizeof(str), fp);
                sscanf(str, "%c%c%c,%d", &gomi[0], &gomi[1], &gomi[2], &counts[i][j][k]);
                sums[i][j] += counts[i][j][k];
            }

    int ind1 = 26;
    int ind2 = 26;

    char passage[1000];
    for (int i = 0; i < 999; i++)
    {
        passage[i] = create(counts[ind1][ind2], rand() % sums[ind1][ind2] + 1, &ind1, &ind2);
    }
    passage[999] = '\0';

    printf("%s\n", passage);
    fclose(fp);

    return 0;
}