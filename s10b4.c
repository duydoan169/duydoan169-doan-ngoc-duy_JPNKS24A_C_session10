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
    for(int i=0; i<size-1; i++){
        int minPos=i;
        for(int j=i+1; j<size; j++){
            if(array[j]<array[minPos]){
                minPos=j;                
            }
        }
    if(minPos!=i){
        int temp = array[i];
        array[i]=array[minPos];
        array[minPos]=temp;
    }
    }
    for(int i=0; i<size; i++){
    printf("%d ", array[i]);
    }

    return 0;
}