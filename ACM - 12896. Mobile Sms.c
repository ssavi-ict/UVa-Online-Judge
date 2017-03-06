#include<stdio.h>
int main()
{
    int i, j, t, n;
    char a[100], b[100];
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        if(n>=5 && n<=100)
       {
            for(i=1;i<=n;i++)
                scanf("%d",&a[i]);
            for(i=1;i<=n;i++)
                scanf("%d",&b[i]);
            for(i=1;i<=n;i++)
            {
                if(a[i]==1 && b[i]==1)
                    printf(".");
                if(a[i]==1 && b[i]==2)
                    printf(",");
                if(a[i]==1 && b[i]==3)
                    printf("?");
                if(a[i]==1 && b[i]==4)
                    printf("\"");
                if(a[i]==2 && b[i]==1)
                    printf("a");
                if(a[i]==2 && b[i]==2)
                    printf("b");
                if(a[i]==2 && b[i]==3)
                    printf("c");
                if(a[i]==3 && b[i]==1)
                    printf("d");
                if(a[i]==3 && b[i]==2)
                    printf("e");
                if(a[i]==3 && b[i]==3)
                    printf("f");
                if(a[i]==4 && b[i]==1)
                    printf("g");
                if(a[i]==4 && b[i]==2)
                    printf("h");
                if(a[i]==4 && b[i]==3)
                    printf("i");
                if(a[i]==5 && b[i]==1)
                    printf("j");
                if(a[i]==5 && b[i]==2)
                    printf("k");
                if(a[i]==5 && b[i]==3)
                    printf("l");
                if(a[i]==6 && b[i]==1)
                    printf("m");
                if(a[i]==6 && b[i]==2)
                    printf("n");
                if(a[i]==6 && b[i]==3)
                    printf("o");
                if(a[i]==7 && b[i]==1)
                    printf("p");
                if(a[i]==7 && b[i]==2)
                    printf("q");
                if(a[i]==7 && b[i]==3)
                    printf("r");
                if(a[i]==7 && b[i]==4)
                    printf("s");
                if(a[i]==8 && b[i]==1)
                    printf("t");
                if(a[i]==8 && b[i]==2)
                    printf("u");
                if(a[i]==8 && b[i]==3)
                    printf("v");
                if(a[i]==9 && b[i]==1)
                    printf("w");
                if(a[i]==9 && b[i]==2)
                    printf("x");
                if(a[i]==9 && b[i]==3)
                    printf("y");
                if(a[i]==9 && b[i]==4)
                    printf("z");
                if(a[i]==0 && b[i]==1)
                    printf(" ");

            }
        }
      printf("\n");
    }
    return 0;
}
