#include <stdio.h>
void solve() {
    int a = 5;
    int res =  a++ + ++a + a++
    printf("%d", res);
}
int main() {
	solve();
	return 0;
}