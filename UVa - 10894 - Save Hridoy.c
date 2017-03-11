#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    int i, j, k, l, m, n, tag;
    char h[5][100];

    strcpy(h[0],"*****..***..*...*.*****...*...*.*****.*****.***...*****.*...*");
    strcpy(h[1],"*.....*...*.*...*.*.......*...*.*...*...*...*..*..*...*..*.*.");
    strcpy(h[2],"*****.*****.*...*.***.....*****.*****...*...*...*.*...*...*..");
    strcpy(h[3],"....*.*...*..*.*..*.......*...*.*.*.....*...*..*..*...*...*..");
    strcpy(h[4],"*****.*...*...*...*****...*...*.*..**.*****.***...*****...*..");

    char v[65][10];

    strcpy(v[0],"*****");strcpy(v[1],"*....");strcpy(v[2],"*****");strcpy(v[3],"....*");strcpy(v[4],"*****");
    strcpy(v[5],".....");strcpy(v[6],".***.");strcpy(v[7],"*...*");strcpy(v[8],"*****");strcpy(v[9],"*...*");
    strcpy(v[10],"*...*");strcpy(v[11],".....");strcpy(v[12],"*...*");strcpy(v[13],"*...*");strcpy(v[14],"*...*");
    strcpy(v[15],".*.*.");strcpy(v[16],"..*..");strcpy(v[17],".....");strcpy(v[18],"*****");strcpy(v[19],"*....");
    strcpy(v[20],"***..");strcpy(v[21],"*....");strcpy(v[22],"*****");strcpy(v[23],".....");strcpy(v[24],".....");
    strcpy(v[25],".....");strcpy(v[26],"*...*");strcpy(v[27],"*...*");strcpy(v[28],"*****");strcpy(v[29],"*...*");
    strcpy(v[30],"*...*");strcpy(v[31],".....");strcpy(v[32],"*****");strcpy(v[33],"*...*");strcpy(v[34],"*****");
    strcpy(v[35],"*.*..");strcpy(v[36],"*..**");strcpy(v[37],".....");strcpy(v[38],"*****");strcpy(v[39],"..*..");
    strcpy(v[40],"..*..");strcpy(v[41],"..*..");strcpy(v[42],"*****");strcpy(v[43],".....");strcpy(v[44],"***..");
    strcpy(v[45],"*..*.");strcpy(v[46],"*...*");strcpy(v[47],"*..*.");strcpy(v[48],"***..");strcpy(v[49],".....");
    strcpy(v[50],"*****");strcpy(v[51],"*...*");strcpy(v[52],"*...*");strcpy(v[53],"*...*");strcpy(v[54],"*****");
    strcpy(v[55],".....");strcpy(v[56],"*...*");strcpy(v[57],".*.*.");strcpy(v[58],"..*..");strcpy(v[59],"..*..");
    strcpy(v[60],"..*..");

    while(scanf("%d",&n)==1 && n!=0)
    {
        if(n>0)
        {
            for(i=0; i<5; i++)
            {
                for(j=0; j<n; j++)
                {
                    for(k=0; k<strlen(h[i]); k++)
                    {
                        for(l=0; l<n; l++)
                        {
                            printf("%c",h[i][k]);
                        }
                    }
                    printf("\n");
                }
            }
        }
        else
        {
            n = n * -1;
            for(i=0; i<61; i++)
            {
                for(j=0; j<n; j++)
                {
                    for(k=0; k<strlen(v[i]); k++)
                    {
                        for(l=0; l<n; l++)
                        {
                            printf("%c",v[i][k]);
                        }
                    }
                    printf("\n");
                }
            }
        }
        printf("\n\n");
    }
    return 0;
}
