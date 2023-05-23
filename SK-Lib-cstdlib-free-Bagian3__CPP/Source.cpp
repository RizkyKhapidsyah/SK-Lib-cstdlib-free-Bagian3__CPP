#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main(){

    int* ptr1 = NULL;
    int* ptr2;
    int x = 5;
    ptr2 = &x;
    int* ptr3 = (int*)malloc(5 * sizeof(int));

    free(ptr1);
    free(ptr3);
    free(ptr2);

    _getch();
    return 0;
}