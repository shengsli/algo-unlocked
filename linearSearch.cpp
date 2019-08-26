#include <cstdio>

int linearSearch(int arr[], int numOfEls, int val) {
	for (int i=0; i<numOfEls; ++i) {
		if (arr[i]==val) return i;
	}
	return -1;
}

int main (int argc, char *argv[]) {
	int val = 3;
	int arr[5] = {1,2,3,4,5};
	int idx = linearSearch(arr,5,val);
	printf("find %d at %d\n", val, idx);
}
