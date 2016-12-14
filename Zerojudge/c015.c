#include <stdio.h>

int cnt = 0;
int chk(int n) {
  int sum = 0, tmp;
  tmp = n;
  while(n > 0) {
    sum = sum * 10;
    sum += n % 10;
    n /= 10;
  }
  if(tmp == sum) return 1;
  return 0;
}

int rev(int n) {
  int sum = 0, tmp = n;
  while(n > 0) {
    sum = sum * 10;
    sum += n % 10;
    n /= 10;
  }
  cnt++;
  return tmp + sum;
}

int main()
{
  int t, n;
  scanf("%d", &t);
  for(int i = 0; i < t; ++i) {
    scanf("%d", &n);
    cnt = 0;
    n = rev(n);
    while(!chk(n)) n = rev(n);
    printf("%d %d\n", cnt, n);
  }
  return 0;
}
