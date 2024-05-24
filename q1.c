#include <stdio.h>
    int x = 0;
    void main()
    {
        int *ptr = &x;
        printf("%p\n", ptr);
        x++;
        printf("%p\n ", ptr);
    }