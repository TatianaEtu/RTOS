#include <core.h> 

int main ( void )
{
    show_my_data();
    show_my_age( 23 );

    for ( int i = 0; i < 10; i++ )
    {
        printf( "Processing idx (%d)\n", i );
    }

    return 0;
}
