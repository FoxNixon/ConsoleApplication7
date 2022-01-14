// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include "ext_calls.h"




using namespace std;

void Task1_5() {
    //using namespace ext;
    const size_t ARR_SIZE = 10;
    float arr[ARR_SIZE] = { 0 };
    size_t posCounter, negCounter = 0;
    cout << "1. Initializing array:" << endl;
    ext::initArray(arr, ARR_SIZE);
    ext::printArray(arr, ARR_SIZE);
    ext::countArray(arr, ARR_SIZE,&posCounter, &negCounter);
}

#define IS_POSITIVE(numToCheck, numToCompare)  (numToCheck<numToCompare && numToCheck >0) ? "True" : "False"

void Task2() {
    int num1, num2 = 0;
    cout << "2. Enter first number -1000..1000" << endl;
    cin >> num1;
    cout << "   Enter second number -1000..1000" << endl;
    cin >> num2;

    cout << "Result is " << string(IS_POSITIVE(num1, num2)) << endl;
}



void Task3() {

#define ARR3_SIZE 10
#define SWAP_INT(a, b)  int temp = a; a = b; b = temp;

    cout << "3. Initializing array:" << endl;
    int array3[ARR3_SIZE] = { 0 };
    bool isDone = false;
    ext::initArrayManually(array3, ARR3_SIZE);
    
        for (size_t i = 0; i < ARR3_SIZE-1; i++)
        {
            for (size_t j = 0; j < ARR3_SIZE-i-1; j++)
            {
                if (array3[j] > array3[j + 1]) {
                    SWAP_INT(array3[j], array3[j + 1]);
                }
            }
        }
    
    ext::printArray(array3, ARR3_SIZE);
}

void Task4() {
#pragma pack(push,1)
    struct Emploee {
        short id;
        string name;
        int age;
        double salary;
    };
#pragma pack(pop)
     cout << sizeof(Emploee) << endl;
     Emploee* pEmploee = new Emploee;
     pEmploee->id = 1;
     pEmploee->name = "Alex";
     pEmploee->salary = 100500;
     pEmploee->age = 32;
     std::ofstream fout;
     fout.open("output_struct_file.txt");
     fout << pEmploee->id << " " << pEmploee->name << " " << pEmploee->age << " " << pEmploee->salary << endl;
     fout.close();

     delete [] pEmploee;
}

int main()
{
    Task4();
    Task3();
    Task1_5();
    Task2();
}


