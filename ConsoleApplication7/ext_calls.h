#pragma once
namespace ext {

	void initArray(float* array, const size_t arraySize);

	void printArray(float* array, const size_t arraySize);

	void printArray(int* array, const size_t arraySize);

	void countArray(float* array, const size_t arraySize, size_t* posCounter, size_t* negCounter);

	void initArrayManually(int* array, const size_t arrSize);
}