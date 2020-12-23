#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf()
{
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while ((c = getchar()) != EOF)
    {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();

    FILE *f1;
    f1 = fopen("broevi.txt", "r");
    if (f1 == NULL)
    {
        printf("ne postoi takov file");
    }
    int n;

    while (fscanf(f1, "%d", &n) == 1)
    {

        if (n == 0)
        {
            break;
        }
        int i, max = -9999, cuvajbroj = 0, broj;
        for (i = 0; i < n; i++)
        {
            fscanf(f1, "%d", &broj);
            int kopija = broj;
            int svrten = 0;
            while (broj != 0)
            {
                svrten = svrten * 10 + broj % 10;
                broj = broj / 10;
            }
            if (svrten % 10 > max)
            {
                max = svrten % 10;
                cuvajbroj = kopija;
            }
        }

        printf("%d\n", cuvajbroj);
    }
    fclose(f1);
}