#include <stdio.h>

void printArr( const int a[], size_t n, const char *s )
{
    printf( "%s:\t", s );

    for ( size_t i = 0; i < n; i++ )
    {
        printf( "%d ", a[i] );
    }
    putchar( '\n' );
}

void swapArray( int *a, int *b, size_t n )
{
    for ( size_t i = 0; i < n; i++ )
    {
        int tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}

int main(void)
{
    enum { N = 4 };
    int a[N] = { 1, 2, 3, 4 };
    int b[N] = { 4, 12, 2, 8 };

    printArr( a, N, "a" );
    printArr( b, N, "b" );
    putchar( '\n' );

    swapArray( a, b, N );


    printArr( a, N, "a" );
    printArr( b, N, "b" );
    putchar( '\n' );

    return 0;
}
