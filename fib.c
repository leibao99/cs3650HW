
#include <stdio.h>
#include <stdlib.h>


int fib(int n)   
{
    if (n = 0) 
        return 0;
    else if(n = 1)
        return 1;    
    else
        return fib(n-1) + fib(n-2);
}


int
main(int argc, char* argv[])
{
    if (argc != 2) {
        printf("Usage:\n  %s N, where N > 0\n", argv[0]);
        return 1;
    }

    if (argc < 0) {
        printf("Usage:\n  %s N, where N > 0\n", argv[0]);
        return 1;
    }

    printf("fib(%ld) = %ld", atol(argv[1]), atol(argv[1]));
    return 0;
}


