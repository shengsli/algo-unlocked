// sheng@x220t:~/algo-unlocked$ g++ binarySearch.cpp -o binarySearch.output
// sheng@x220t:~/algo-unlocked$ ./binarySearch.output 

#include <cstdio>

int binarySearch (int arr[], int numOfEls, int val) {
	int p=1, r=numOfEls, q;
	while (p<=r) {
		q = (p+r)/2;
		if (arr[q] == val) return q;
		else if (arr[q] > val) r = q-1;
		else p = q+1;
	}
	return -1;
}

int main (int argc, char *argv[]) {
 	int val = 3;
	int numOfEls = 5;
	int arr[numOfEls] = {1,2,3,4,5};
	int idx = binarySearch(arr,numOfEls,val);
	printf("find %d at %d\n", val, idx);
}
