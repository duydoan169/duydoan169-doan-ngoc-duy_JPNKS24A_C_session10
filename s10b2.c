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
    for(int i=0; i<size-1;i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j]>array[j+1]){
                int temp = array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    return 0;
}