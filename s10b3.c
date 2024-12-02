#include<stdio.h>
int main(){
    int size=0;
    printf("nhap so phan tu muon nhap: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    for(int i=1; i<size; i++){
        int key=array[i];
        int j=i-1;
        while(j>=0 && key<array[j]){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
    for(int i=0; i<size; i++){
    printf("%d ", array[i]);
    }

    return 0;
}