#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter Number of integer you want :");
    scanf("%d", &n);

    int *ptr = (int*)malloc(n * sizeof(int));
    int *p = ptr;

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &(*ptr));
        ptr++;
    }

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", *p);
        p++;
    }

    free(p);

    return 0;
}