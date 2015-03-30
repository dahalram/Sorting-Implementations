#include <iostream>

using namespace std;

#define SIZE 10

void pigeonHole(int min, int max, int *myArray){
	int length = max - min + 1;
	int slots[length];

	int counter, *current = myArray;

	for (int i = 0; i < length; i++){
		slots[i] = 0;
	}

	for (int j = 0; j < SIZE; j++){
		slots[myArray[j] - min]++;
	}

	int k = 0;
	for (counter = 0; counter < length; counter++){
		while (slots[counter] --> 0){
			myArray[k] = counter + min;
			k++;
		}
	}

}

int main(){
	int min, max;
	int myArray[SIZE];

	cout <<" Enter the values into the array: \n"<< endl;
	for (int i = 0; i < SIZE ; i++){
		cin >> myArray[i];
	}

	min = myArray[0];
	max = myArray[0];

	for (int j = 1; j < SIZE; j++){
		if (myArray[j] > max){
			max = myArray[j];
		}
		if (myArray[j] < min){
			min = myArray[j];
		}
	}

	pigeonHole(min, max, myArray);

	cout << "\n Sorted order: \n" << endl;

	for (int i = 0; i < SIZE; i++){
		cout << myArray[i] << " " ;
	}


}
