#include <cstdio>

int sentinelLinearSearch(int arr[], int numOfEls, int val) {
	int last = arr[numOfEls-1];
	arr[numOfEls-1] = val;
	int i=0;
	while (arr[i]!=val) {
		++i;
	}
	arr[numOfEls-1]=last;
	if (i<numOfEls-1 || arr[numOfEls-1]==val) {
		return i;
	}
	else {
		return -1;
	}
}

int main (int argc, char *argv[]) {
	int val = 3;
	int numOfEls = 4;
	int arr[numOfEls] = {1,2,4,5};
	int idx = sentinelLinearSearch(arr,numOfEls,val);
	if (idx != -1)
		printf("find %d at %d\n", val, idx);
	else
		printf("not found\n");
}
