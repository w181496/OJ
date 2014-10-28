#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct point{
	int x,y;
}p[500000],k;
int ox[500000];

bool cmp(point a,point b) {
	return a.y>b.y||(a.y==b.y)&&(a.x>b.x);
}

int main() {
	int n,t,i,j;
	for (t=1;scanf("%d",&n)==1;t++) {
		for (i=0;i<n;i++) scanf("%d%d",&p[i].x,&p[i].y);
		sort(p,p+n,cmp);
		memset(ox,0,sizeof(ox));
		k.x=-1;
		k.y=1000000;
		j=0;
		for (i=0;i<n;i++) {
			if (k.y!=p[i].y&&k.x<p[i].x) {
				ox[j]=i;
				j++;
				k=p[i];
			}
		}
		printf("Case %d:\nDominate Point: %d\n",t,j);
		for (i=0;i<j;i++) printf("(%d,%d)\n",p[ox[i]].x,p[ox[i]].y);
	}
}
