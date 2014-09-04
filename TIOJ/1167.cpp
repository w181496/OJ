#include<cstdio>
#include<cstdlib>
int compare (const void * a, const void * b)
{
  return  *(int*)a - *(int*)b ;
}
int n[1000005];
int main()
{
    int t,i,g;
    while(scanf("%d%d",&t,&g)&&t!=0&&g!=0)
    {
        for(i=0;i<t;++i)
             scanf("%d",&n[i]);
        qsort (n, t, sizeof(int), compare);
        printf("%d\n",n[t-g]);
    }
    return 0;
}