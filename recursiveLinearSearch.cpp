// sheng@x220t:~/algo-unlocked$ g++ recursiveLinearSearch.cpp -o recursiveLinearSearch.output
// sheng@x220t:~/algo-unlocked$ ./recursiveLinearSearch.output 

#include <cstdio>

/**
 * with an added parameter i.   
 */
int recursiveLinearSearch(int arr[], int numOfEls, int i, int val) {
	if (i>numOfEls)
		return -1;
	else if (arr[i]==val)
		return i;
	else
		return recursiveLinearSearch(arr, numOfEls, i+1, val);
}

int main (int argc, char *argv[]) {
	int val = 3;
	int arr[5] = {1,2,4,5};
	int idx = recursiveLinearSearch(arr,5,0,val);
	printf("find %d at %d\n", val, idx);
}
