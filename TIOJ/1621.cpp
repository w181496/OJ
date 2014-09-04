#include<cstdio>
#include<stack>
using namespace std;
main() {
    int n, x, A = 0;
    stack<int>stack;
    stack.push(0);
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &x, &x);
        while(x < stack.top()) A++, stack.pop();
        if(x != stack.top()) stack.push (x);
    }
    printf("%d\n", A + stack.size()-1);
}