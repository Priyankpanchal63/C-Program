 #include <stdio.h>
    int main()
    {
        int i = 0, j = 1;
        int *a[] = {&i, &j};
        printf("%d", (*a)[0]);
        return 0;
    }