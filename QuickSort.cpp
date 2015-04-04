#include <iostream>

using namespace std;

void quickSort(int myList[], int left, int right){
	int l = left , r = right;

	int temp;
	int pivot = myList[(left + right)/2];

	// Partition
	while (l <= r){
		while (myList[l] < pivot){
			l++;
		}
		while (myList[r] > pivot){
			r--;
		}

		if (l <= r){
			temp = myList[l];
			myList[l] = myList [r];
			myList[r] = temp;
			l++;
			r--;
		}
	}

	//Recursion
	if (left < r){
		quickSort(myList, left, r);
	}
	if (l < right){
		quickSort(myList, l, right);
	}
}

int main(){
	int n;
	cout << " How many numbers do you want to sort? " << endl;
	cin >> n;
	int myList[n];

	for (int i = 0; i < n; i++){
		cin >> myList[i];
	}

	int left = 0, right = n-1;

	quickSort(myList, left, right);
	
	cout << " Your Sorted List: \n";
	for (int k = 0; k < n; k++){
		cout << myList[k] << " ";
	}

}
