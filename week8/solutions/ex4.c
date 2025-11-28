#include <stdio.h>

int main()
{
    const size_t size = 6;
    int arr[size] = {0};
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", arr+i);
    }
    for (size_t i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
