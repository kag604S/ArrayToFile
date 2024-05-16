#include <iostream>
#define SIZE 10
#include "array.h"
#include <stdlib.h>
using namespace std;

void menu(void){
    cout <<"1. Enter the values into the array" <<endl;
    cout <<"2. Display the content of the array" <<endl;
    cout <<"3. Determine the maximum value" <<endl;
    cout <<"4. Determine the minimum value" <<endl;
    cout <<"5. Determine the average value" <<endl;
    cout <<"0. EXIT" <<endl;
    cout <<"Select an option:" <<endl;
}




int main() {


    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};

    int option = 0;
    int max;
    int min;
    float avg;

    do{
        menu();
        cin >> option;
        switch (option){
            case 0:
                break;
            case 1:
                cout <<"1. Enter the values into the array" <<endl;
                enterValue(array);
                break;
            case 2:
                cout <<"2. Display the content of the array" <<endl;
                printArray(array);
                break;
            case 3:
                cout <<"3. Determine the maximum value" <<endl;
                max = findMaximumValue(array);
                cout <<max <<endl;
                break;
            case 4:
                cout <<"4. Determine the minimum value" <<endl;
                min = findMiniumValue(array);
                cout <<min <<endl;
                break;
            case 5:
                cout <<"5. Determine the average value" <<endl;
                avg = calculateAverage(array);
                cout <<avg <<endl;
                break;
            default:
                cout <<"choose the right option" <<endl;

        }
    }while (option !=0);

    cout <<"The End";

    return 0;
}