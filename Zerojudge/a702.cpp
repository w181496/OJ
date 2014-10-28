#include<cstdio>
int prime[20000001] = { 1, 1, 0 };
int answer[100005] = {0};
int allanswer = 1;
main()
{
    long long i, j;
    for( i = 3 ; i < 20000000 && allanswer <= 100000 ; i+=2 )
        if( !prime[i] )
        {
            for( j = i*i ; j < 20000000 ; j += i )
                prime[j] = 1;
            if( !prime[i] && !prime[i-4] )
                answer[allanswer++] = i-4;
        }
    int S;
    while(scanf( "%d", &S )==1)
        printf( "(%d, %d)\n", answer[S+1], answer[S+1]+4 );
}
