#include<cstdio>
#include<cstdlib>
int compare (const void * a, const void * b)
{
  return  *(int*)a - *(int*)b ;
}
int n[1000005];
int main()
{
    int t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;++i)
             scanf("%d",&n[i]);
        qsort (n, t, sizeof(int), compare);
        printf("%d",n[0]);
        for(i=1;i<t;++i)
            printf(" %d",n[i]);
        printf("\n");
    }
    return 0;
}