#include <iostream>
#include "array.h"
#include <stdlib.h>
FILE * fptr;
using namespace std;
void  enterValue(int *array){
    cout <<"Input values to array:" << endl;
    for (int i=0; i < SIZE; ++i) {
        cout << "*(array +" << i <<") = ";
        cin >> *(array + i);
    }
}
void printArray(int *array) {
    for (int i = 0; i < SIZE; ++i) {
        cout<<"*(array + "<< i << ") = " << *(array + i) <<endl;
    }
}
int findMaximumValue(int *array) {
    int max = *array;
    for (int i = 0; i < SIZE; ++i ){
        if(*(array + i) > max){
            max = *(array + i);
        }
    }
    return max;
}
int findMiniumValue(int *array){
    int min = *array;
    for (int i = 0; i < SIZE; ++i ){
        if(*(array + i) < min) {
            min = *(array + i);
        }
    }
    return min;
}
float calculateAverage(int *array){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i ) {
        sum = sum + *(array + i);
    }
    float avg = (float)sum / SIZE;
    return avg;
}