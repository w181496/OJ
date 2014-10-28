#include <stdio.h>
#include <string.h>

using namespace std ;


int T ;
int N ;
char c[10] ;
char todo[20] ;
char code[100] ;
char now[3000][3000] ;

void proc ( int ) ;

int main ( )
{
	while ( scanf ( "%d" , &T ) == 1 ) {
		while ( T-- ) {
			scanf ( "%d%*c" , &N ) ;
			memset ( now , 0 , sizeof ( now ) ) ;
			for ( int i = 1 ; i <= N ; i++ ) {
				gets ( code ) ;
				sscanf ( code , "%s %s" , todo , c ) ;
				proc ( i ) ;
				printf ( "%s\n" , now[i] ) ;
			}
		}
	}
	return 0 ;
}

void proc ( int i )
{
	if ( strcmp ( todo , "pushfront" ) == 0 ) {
		strcpy ( now[i] , c ) ;
		strcat ( now[i] , now[i-1] ) ;
	}
	else if ( strcmp ( todo , "pushback" ) == 0 ) {
		strcpy ( now[i] , now[i-1] ) ;
		strcat ( now[i] , c ) ;
	}
	else {
		int tmp ;
		sscanf ( c , "%d" , &tmp ) ;
		strcpy ( now[i] , now[i-tmp-1] ) ;
	}
}
