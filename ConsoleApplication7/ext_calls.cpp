
#include <iostream>
using namespace std;
namespace ext {

	void initArray(float* array, const size_t arraySize) {

		for (size_t i = 0; i < arraySize; i++) {

			array[i] = float(rand() % 100 - 50);

		}

	}

	void printArray(float* array, const size_t arraySize) {
		cout << "Your array is: ";
		for (size_t i = 0; i < arraySize; i++) {

			cout << array[i] << " ";

		}
		cout << endl;
	}

	void printArray(int* array, const size_t arraySize) {
		cout << "Your array is: ";
		for (size_t i = 0; i < arraySize; i++) {

			cout << array[i] << " ";

		}
		cout << endl;
	}

	void countArray(float* array, const size_t arraySize, size_t* posCounter, size_t* negCounter) {
		/**posCounter = 0;
		*negCounter = 0;*/
		int pos = 0;
		int neg = 0;
		cout << "Your array has: ";
		for (size_t i = 0; i < arraySize; i++) {
			if (array[i] > 0) {
				pos++;
			}
			else if (array[i] < 0) {
				neg++;
			}
		}
		*posCounter = pos;
		*negCounter = neg;
		cout << *posCounter << " positive and " << *negCounter << " negative elements." << endl;
	}

	void initArrayManually(int* array, const size_t arrSize) {
		for (size_t i = 0; i < arrSize; i++){
			cout << "Element " << i + 1 << " = ";
			cin >> array[i];
		}
		cout << "Done" << endl;
	}

	
}