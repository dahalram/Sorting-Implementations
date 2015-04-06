#include <iostream>

using namespace std;

void bubbleSort(int myList[], int n){
	int i = 0;
	int temp;
	bool swap = true;

	while(swap){
		swap = false;
		i++;
		for (int j = 0; j < n - i; j++){
			if (myList[j] > myList[j+1]){
				temp = myList[j];
				myList[j] = myList[j+1];
				myList[j+1] = temp;
				swap = true;
			}
		}
	}
}

int main(){
	int n;
	cout << " How many numbers do you want to sort? \n";
	cin >> n;
	int myList[n];

	cout << " *****Enter the numbers you want to sort. *****\n";
	for (int i = 0; i < n; i++){
		cin >> myList[i];
	}

	bubbleSort(myList, n);
	
	//Your sorted array
	cout << " *****Your sorted array: *****\n";
	for (int i = 0; i < n; i++){
		cout << myList[i] << " ";
	}
	return 0;
}
