// sheng@x220t:~/algo-unlocked$ g++ factorial.cpp -o factorial.output
// sheng@x220t:~/algo-unlocked$ ./factorial.output 

#include <cstdio>

int factorial(int n) {
	if (n==0)
		return 1;
	else
		return n * factorial(n-1);
}

int main (int argc, char *argv[]) {
	int result = factorial(3);
	printf("%d\n", result);
}
