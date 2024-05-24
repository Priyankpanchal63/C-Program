#include <stdio.h>
    void main()
    {
        int x = 4;
        int *p = &x;
        int *k = p++;
        int r = p - k;
        printf("%d", r);
    }