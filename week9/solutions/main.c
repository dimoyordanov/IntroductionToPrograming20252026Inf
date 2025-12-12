#include <stdio.h>
#include <limits.h>
#define SIZE 100


void fill(int arr[SIZE], int a, int d) {
    arr[0] = a;
    for (size_t i = 1; i < SIZE; i++)
    {
        // Вариант 1
        // arr[i] += i*d
        // Вариант 2
        arr[i] = arr[i-1]+d;
    }
}

void zero(int arr[SIZE]) {
    fill(arr, 0,0);
}


void ones(int arr[SIZE]) {
    fill(arr, 1,0);
}

unsigned int min(unsigned int a, unsigned int b) {
    if ( a <= b){
        return a;
    } else {
        return b;
    }
}

unsigned int abs(int a) {
    if (a < 0) {
        return -a;
    } else {
        return a;
    }
}

int linearSearch(int arr[SIZE], int key) {
    unsigned int diff = __UINT32_MAX__;
    for (size_t i = 0; i < SIZE; i++)
    {
        diff = min(diff, abs(arr[i]-key));
        if (diff == 0){
            return 0;
        }
    }
    return diff;
}

int isSorted(int arr[SIZE]) {
    int compare = arr[0];
    for (size_t i = 1; i < SIZE; i++)
    {
        if (compare < arr[i]) {
            compare = arr[i];
        } else {
            return abs(arr[i]-compare);
        }
    }
    return 0;
}

long long int getValue(int arr[SIZE], int index) {
    if (index < 0 || index >= SIZE) {
        return __INT32_MAX__+1;
    } else {
        return arr[index];
    }
}

long long int setValue(int arr[SIZE], int index, int value) {
    if (index < 0 || index >= SIZE) {
        return INT_MAX+INT_MAX;
    } else {
        arr[index] = value;
        return value;
    }
}

int addFront(int arr[SIZE], int size, int value) {
    if (size == SIZE) {
        return 1;
    }
    arr[size]=value;
    return 0;
}

int addBack(int arr[SIZE], int size, int value) {
    if (size == SIZE){
        return 1;
    }
    for (size_t i = size; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    return 0;
}

int removeFront(int arr[SIZE], int size, int value) {
    if (size == 0) {
        return 1;
    }
    arr[size]=0;
    return 0;
}

int removeBack(int arr[SIZE], int size, int value) {
    if (size == 0){
        return 1;
    }
    for (size_t i = 0; i < size-1; i--)
    {
        arr[i] = arr[i+1];
    }
    return 0;
}

void insertionSort(int arr[SIZE], int size) {
    for (size_t i = 0; i < size; i++)
    {
        int key = arr[i];
        int index = i-1;
        while (index >= 0 && arr[index] > arr[index+1]){
            int b;
            b = arr[index+1];
            arr[index+1] = arr[index];
            arr[index] = b;
            index -=1;
        }
    }
}

void bubbleSort(int arr[SIZE], int size) {
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 1; j < size-i; j++)
        {
            if (arr[j-1] > arr[j]) {
                int b = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = b;
            }
        }
        
    }
    
}

void print(int arr[SIZE], int size) {
    for (size_t i = 0; i < size-1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[size-1]);
    
}

int main() {
    int values[SIZE] = {0};
    fill(values,100, -1);
    print(values, 100);
    bubbleSort(values, 100);
    print(values, 100);
    printf("%d, %d, %d\n",
        linearSearch(values, 1),
        linearSearch(values, 2),
        isSorted(values));
    return 1;
}
