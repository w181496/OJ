#include<cstdio> //XOR 參考某神人寫法
int main()
{
	int n;
	while(scanf("%u",&n) != EOF)
	{
		unsigned int a = 0;
		while(--n >= 0)
		{
			unsigned int i;
			scanf("%u",&i);
			a ^= i;
		}
		printf("%u\n",a);
	}
	return 0;
}