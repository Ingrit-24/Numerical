#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HM 614656

int counts[28][28][28][28] = {
    {
        {
            {
                0,
            },
        },
    },
};
int ind_1 = 26;
int ind_2 = 26;
int ind_3 = 26;

void atoz(char x)
{
    switch (x)
    {
    case 'a':
    case 'A':
        counts[ind_1][ind_2][ind_3][0]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 0;
        break;
    case 'b':
    case 'B':
        counts[ind_1][ind_2][ind_3][1]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 1;
        break;
    case 'c':
    case 'C':
        counts[ind_1][ind_2][ind_3][2]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 2;
        break;
    case 'd':
    case 'D':
        counts[ind_1][ind_2][ind_3][3]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 3;
        break;
    case 'e':
    case 'E':
        counts[ind_1][ind_2][ind_3][4]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 4;
        break;
    case 'f':
    case 'F':
        counts[ind_1][ind_2][ind_3][5]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 5;
        break;
    case 'g':
    case 'G':
        counts[ind_1][ind_2][ind_3][6]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 6;
        break;
    case 'h':
    case 'H':
        counts[ind_1][ind_2][ind_3][7]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 7;
        break;
    case 'i':
    case 'I':
        counts[ind_1][ind_2][ind_3][8]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 8;
        break;
    case 'j':
    case 'J':
        counts[ind_1][ind_2][ind_3][9]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 9;
        break;
    case 'k':
    case 'K':
        counts[ind_1][ind_2][ind_3][10]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 10;
        break;
    case 'l':
    case 'L':
        counts[ind_1][ind_2][ind_3][11]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 11;
        break;
    case 'm':
    case 'M':
        counts[ind_1][ind_2][ind_3][12]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 12;
        break;
    case 'n':
    case 'N':
        counts[ind_1][ind_2][ind_3][13]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 13;
        break;
    case 'o':
    case 'O':
        counts[ind_1][ind_2][ind_3][14]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 14;
        break;
    case 'p':
    case 'P':
        counts[ind_1][ind_2][ind_3][15]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 15;
        break;
    case 'q':
    case 'Q':
        counts[ind_1][ind_2][ind_3][16]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 16;
        break;
    case 'r':
    case 'R':
        counts[ind_1][ind_2][ind_3][17]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 17;
        break;
    case 's':
    case 'S':
        counts[ind_1][ind_2][ind_3][18]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 18;
        break;
    case 't':
    case 'T':
        counts[ind_1][ind_2][ind_3][19]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 19;
        break;
    case 'u':
    case 'U':
        counts[ind_1][ind_2][ind_3][20]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 20;
        break;
    case 'v':
    case 'V':
        counts[ind_1][ind_2][ind_3][21]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 21;
        break;
    case 'w':
    case 'W':
        counts[ind_1][ind_2][ind_3][22]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 22;
        break;
    case 'x':
    case 'X':
        counts[ind_1][ind_2][ind_3][23]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 23;
        break;
    case 'y':
    case 'Y':
        counts[ind_1][ind_2][ind_3][24]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 24;
        break;
    case 'z':
    case 'Z':
        counts[ind_1][ind_2][ind_3][25]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 25;
        break;
    case ' ':
        counts[ind_1][ind_2][ind_3][26]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 26;
        break;
    case '\n':
        counts[ind_1][ind_2][ind_3][27]++;
        ind_1 = ind_2;
        ind_2 = ind_3;
        ind_3 = 27;
        break;
    }
}

int main(void)
{
    FILE *fp;
    FILE *fp_n;
    char str[256];
    char mem[28] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', 'N'};
    char pea[5];

    int deta_1[HM] = {
        0,
    };
    char deta_2[HM][5] = {
        {
            '\0',
        },
    };

    fp = fopen("new.txt", "r");
    fp_n = fopen("part8.csv", "w");

    pea[4] = '\0';
    if (fp == NULL || fp_n == NULL)
    {
        printf("file error");
        return 1;
    }

    while (fgets(str, 256, fp) != NULL)
    {
        for (int i = 0; i < 256; i++)
        {
            if (str[i] == '\0')
                break;
            atoz(str[i]);
        }
    }

    int count = 0;
    for (int i = 0; i < 28; i++)
        for (int j = 0; j < 28; j++)
            for (int k = 0; k < 28; k++)
                for (int l = 0; l < 28; l++)
                {
                    pea[0] = mem[i];
                    pea[1] = mem[j];
                    pea[2] = mem[k];
                    pea[3] = mem[l];

                    deta_1[count] = counts[i][j][k][l];
                    deta_2[count][0] = pea[0];
                    deta_2[count][1] = pea[1];
                    deta_2[count][2] = pea[2];
                    deta_2[count][3] = pea[3];
                    deta_2[count][4] = pea[4];

                    count++;
                    fprintf(fp_n, "%s,%d\n", pea, counts[i][j][k][l]);
                }

    for (int i = 0; i < HM; i++)
        printf("%s:%d\n", deta_2[i], deta_1[i]);

    fclose(fp);
    fclose(fp_n);
}