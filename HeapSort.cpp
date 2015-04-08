#include <iostream>

using namespace std;

void heapMax(int *myList, int i, int n){
	int temp = myList[i], j;
	j = 2*i;

	while(j <= n){
		if (j < n && myList[j+1] > myList[j]){
			j++;
		}
		if (temp > myList[j]){
			break;
		}
		else if (temp <= myList[j]){
			myList[j/2] = myList[j];
			j *= 2;
		}
	}
	myList[j/2] = temp;
	return;
}

void HeapSort(int *myList, int n){
	int temp, k;
	for (k = n; k >=2; k--){
		temp = myList[k];
		myList[k] = myList[1];
		myList[1] = temp;
		heapMax(myList, 1, k-1);
	}
}

void makeMax(int *myList, int n){
	for (int i = n/2; i >=1; i--){
		heapMax(myList, i, n);
	}
}

int main(){
	int n;
	cout << " Enter the number of elements to sort. \n";
	cin >> n;

	int myList[n];
	for (int i = 1; i <= n; i++){
		cin >> myList[i];
	} 

	makeMax(myList, n);
	HeapSort(myList, n);

	//Print out the sorted list
	cout << " Sorted List is: \n";
	for (int i = 1; i <= n; i++){
		cout << myList[i] << " ";
	}
}
