#include <stdio.h>
#include <stdlib.h>

void printHello(){
    printf("Hello!\n");
}

int* multiply(int* arr, int n);

void parse(int* arr, int n, int* newArr, int* newN);

long main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int* arrNew = multiply(arr,n);

    for (int i = 0; i < n; i++) {
        if (i != n - 1){
            printf("%d", arrNew[i]);
        }
        else {
            printf("%d\n", arrNew[i]);
        }
    }
    printf("%d\n", arr[0]);

    int*  arrClear = NULL;
    int nClear;

    return 0;


}
int* multiply(int* arr, int n){
    int* newArr = (int*) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i] * 2;
    }
    return newArr;

}
void parse(int* arr, int n, int* newN){
    int j = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] >= 0){
            j++;
        }
    }
    *newN = j;
    j = 0;

    newArr = (int*)calloc(j, sizeof(int));

    for (int i = 0; i < n; i++) {
        if (*(arr + i) >= 0){
            *(newArr + j) = *(arr + i);
            j++;
        }

    }

}
