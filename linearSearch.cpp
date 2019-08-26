#include <cstdio>

int linearSearch(int[] arr, int numOfEls, int val) {
	for (int i=0; i<numOfEls; ++i) {
		if (arr[i]==val) return i;
	}
	return NULL;
}

int main (int argc, char[] *argv) {
	int[] arr = {1,2,3,4,5};
	linearSearch(arr,5,3);
}
