#include <utility>

/**
 * Result: The elements of arr are sorted into nondecreasing order.   
 */
void selSort (int arr[], int numOfEls) {
	for (int i=0; i<numOfEls-1; ++i) {
		int smallest = i;
		for (int j=i+1; j<numOfEls; ++j) {
			smallest = arr[j] < arr[smallest] ? j : smallest;
		}
		std::swap(arr[i], arr[smallest]);
	}
}

int main (int argc, char* argv[]) {
	const int numOfEls = 5;
	int arr[numOfEls] = {3,1,2,5,4};
    selSort(arr,numOfEls);
	for (int i=0; i<numOfEls; ++i) {
		printf("%d, ", arr[i]);
	}
}
