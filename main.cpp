#include <iostream>
#include "array.h"
#include <stdio.h>
#include <stdlib.h>
FILE * fptr;
void menu(){
    int option;
    printf("1.Enter value to array \n") ;
    printf("2.Print array \n") ;
    printf("3.Display minimum value \n") ;
    printf("4.Display maximum value \n") ;
    printf("5.Display average value \n") ;
    printf("6.Add array to a file \n") ;
    printf("7.Display array from a file \n") ;
    printf("0. Exit Program \n") ;
    printf("Enter Value:\n");
}






int main() {

    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    int i, aSize;
    int max = 0;
    int min = 0;
    float avg= 0;
    int option;



    do {

        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Entering values to the array\n");
                enterValue(array);
                break;
            case 2:
                printf("Printing array\n");
                printArray(array);
                break;
            case 3:
                printf("Dispalaying minimum value\n");
                min=findMiniumValue(array);
                printf("Minium is: %d\n",min);
                break;
            case 4:
                printf("Dispalaying maximum value\n");
                max=findMaximumValue(array);
                printf("Maximum is: %d\n",max);
                break;
            case 5:
                printf("Dispalaying average value\n");
                avg=calculateAverage(array);
                printf("Average is: %f\n",avg);
                break;
            case 6:
                fptr = fopen("array.txt", "w");
                if (fptr == 0)
                {
                    printf("Blad otwierania pliku!\n");
                    exit(1);
                }
                for (int i=0; i < SIZE; ++i) {
                    fprintf(fptr,"array %d = %d\n", i, *(array + i));
                }
                fclose(fptr);
                break;
            case 7:
                char fileLine[10];
                fptr = fopen("array.txt", "r");
                if (fptr != 0)
                {
                    while (!feof(fptr))
                    {
                        fgets(fileLine, 100, fptr);
                        if (!feof(fptr))
                        {
                            puts(fileLine);
                        }
                    }
                }
                else
                {
                    printf("\nBlad otwierania pliku!\n");
                }
                fclose(fptr);

                break;

            case 0:
                break;
            default:
                printf("Enter correct value");
        }

    } while (option != 0);

    printf("The End...");
    fptr = fopen("array.txt", "w");

    return 0;
}
