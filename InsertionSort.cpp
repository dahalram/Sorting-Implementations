//The code using class

#include <iostream>
using namespace std;

/*
 * Implementation of Insertion Sort
 * Example call:
 *      InsertionSort::sort(myArray, SIZE);
 */
class InsertionSort{
    public:
        static void sort(int myArray[], int SIZE){
            for (int i = 1; i < SIZE; i++){
                int j = i;
                while (j > 0 && (myArray[j-1] > myArray[j])){
                    int temp = myArray[j];
                    myArray[j] = myArray[j-1];
                    myArray[j-1] = temp;
                    j--;
                }
            }
        }
};

/*
 * Sample usage of PigeonHole Sort
 */
int main(){
    int SIZE;
    cout << "Enter the size of the array\n";
    cin >> SIZE;
    cout << " Enter the "<< SIZE << " numbers to be sorted: \n" << endl;
    int myArray[SIZE];

    for (int i = 0; i < SIZE; i++){
        cin >> myArray[i];
    }

    InsertionSort::sort(myArray, SIZE);

    //Printing the list.
    cout << "\n Sorted List: \n";
    for (int i = 0; i < SIZE; i++){
        cout << " " << myArray[i];
    }

    return 0;
}
