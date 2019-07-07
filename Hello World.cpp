#include<cstdio>
using namespace std;

const int N = 100100;

char s[N] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd' };
char in[N];

int main(){
	scanf("%s", in + 1);
	printf("%s %s", s, in + 1);
}
