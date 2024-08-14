#include <stdint.h>
void insertionSort(int a [],int n){
    int i, j, key;
    for(i = 1; i<n; i++){
        key = a[i];
        for(j=i-1; j>=0; j--){
            if(key >= a[j]) break;
            else a[j+1] = a[j];
    }
    a[j+1] = key;
    }
}
int main(void){
    int a[] = {7,12,2};
    int n = sizeof(a)/sizeof(int);

    insertionSort(a,n);

    for(int i = 0; i < n; i ++) printf("%5d", a[i]);
    return 0;
}
