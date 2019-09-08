// C:\Users\sheng\AppData\Roaming\algo-unlocked>cl recursiveBinarySearch.cpp
// Microsoft (R) C/C++ Optimizing Compiler Version 19.16.27032.1 for x86
// Copyright (C) Microsoft Corporation.  All rights reserved.

// recursiveBinarySearch.cpp
// Microsoft (R) Incremental Linker Version 14.16.27032.1
// Copyright (C) Microsoft Corporation.  All rights reserved.

// /out:recursiveBinarySearch.exe
// recursiveBinarySearch.obj

// C:\Users\sheng\AppData\Roaming\algo-unlocked>recursiveBinarySearch.exe
// find 5 at 4

#include <cstdio>

int recursiveBinarySearch (int arr[], int p, int r, int val) {
	int q;
	if (p>r) {
		return -1;
	}
	else {
		q = (p+r)/2;
		if (arr[q]==val) {
			return q;
		}
		else if (arr[q]>val) {
			return recursiveBinarySearch(arr,   p, q-1, val);
		}
		else {
			return recursiveBinarySearch(arr, q+1,   r, val);
		}
	}
}

int main (int argc, char *argv[]) {
 	int val = 5;
	const int numOfEls = 5;
	int arr[5] = {1,2,3,4,5};
	int idx = recursiveBinarySearch(arr,0,numOfEls-1,val);
	printf("find %d at %d\n", val, idx);
}
