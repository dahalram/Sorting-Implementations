#include <iostream>

using namespace std;

#define SIZE 5

void printList(int myArray[]){
	cout << "\n Sorted List: \n";

	for (int i = 0; i < SIZE; i++){
		cout << " " << myArray[i];
	}

}

void insertionSort(int myArray[]){

	for (int i = 1; i < SIZE; i++){
		int j = i;
		while (j > 0 && (myArray[j-1] > myArray[j])){
			int temp = myArray[j];
			myArray[j] = myArray[j-1];
			myArray[j-1] = temp;
			j--;
		}
	}
	printList(myArray);
}

int main(){
	int myArray[SIZE];

	cout << " Enter the numbers to be sorted: \n" << endl;

	for (int i = 0; i < SIZE; i++){
		cin >> myArray[i];
	}
	insertionSort(myArray);
	return 0;
}
