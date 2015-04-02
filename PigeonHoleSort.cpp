//This program uses class to call the function

#include <iostream>
using namespace std;
#include <vector>
/*
 * Implementation of Pigeon Hole Sort
 * Example call:
 *      PigeonHole::sort(myArray, SIZE);
 */
class PigeonHole {
    public:
        static void sort(int *myArray, int SIZE){
            int min = myArray[0];
            int max = myArray[0];

            // Find the minimum and maximum element in the array.
            for (int j = 1; j < SIZE; j++){
                if (myArray[j] > max){
                    max = myArray[j];
                }
                if (myArray[j] < min){
                    min = myArray[j];
                }
            }

            // Length is no of maximum possible distict nos between min and max
            int length = max - min + 1;
            vector<int> slots(length); // create slots to support the distinct possible nos

            // setting count of all slots to zero
            for (int i = 0; i < length; i++){
                slots[i] = 0;
            }

            // Filling in the slots
            for (int j = 0; j < SIZE; j++){
                // jth element in myArray maps to (myArray[j] - min)th slot pos
                slots[myArray[j] - min]++;
            }

            int k = 0; // counter to fill myArray with sorted elements
            for (int counter = 0; counter < length; counter++){
                // The element we put from array = (min+slot pos)
                while (slots[counter]-- > 0){ // put counter no of elements back into array
                    myArray[k] = counter + min;
                    k++;
                }
            }
        }
};

/*
 * Sample usage of PigeonHole Sort
 */
int main(){
    int min, max, SIZE;
    cout << "Enter the size of the array\n";
    cin >> SIZE;
    int myArray[SIZE];

    cout <<" Enter the "<< SIZE << " values into the array: \n"<< endl;
    for (int i = 0; i < SIZE ; i++){
        cin >> myArray[i];
    }

    PigeonHole::sort(myArray, SIZE);

    cout << "\n Sorted order: \n" << endl;
    for (int i = 0; i < SIZE; i++){
        cout << myArray[i] << " " ;
    }
}

