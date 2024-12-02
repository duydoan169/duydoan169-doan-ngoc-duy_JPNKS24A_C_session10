#include<stdio.h>
int main(){
    int size=0, search=0, found=0, arrayfound[100];
    printf("nhap so phan tu muon nhap: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("nhap phan tu muon tim: ");
    scanf("%d", &search);
    for(int i=0; i<size; i++){
        if(array[i]==search){
            arrayfound[found]=i;
            found=found+1;
        }
    }
    if(found!=0){
        printf("vi tri cua %d trong mang la: ", search);
        for(int i = 0; i<found; i++){
            printf("%d ", arrayfound[i]);
        }
    }
    if(found==0){
        printf("phan tu khong ton tai trong mang");
    }
    return 0;
}