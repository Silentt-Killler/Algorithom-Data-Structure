// Insertion Sort in C++
// Time Complexity O(n^2)
// Space Complexity O(1)

#include <bits/stdc++.h>

int main(){
    int inser_arr[101];
    int arr_size,value,hole;

    //input array size
    printf("Enter the array size : \n");
    scanf("%d",&arr_size);

    // input array element
    printf("Enter the value of the array; \n");
    for(int n=0;n<arr_size;n++){
        scanf("%d",&inser_arr[n]);
    }

    // Print before sorting
    printf("\nBefore Sorting\n");
    for(int n=0;n<arr_size;n++){
        printf("%d ",inser_arr[n]);
    }

    //Outer loop iterate over all number
    for(int i=1;i<arr_size;i++) {
    value=inser_arr[i];
    hole=i;
        while (hole>0 && inser_arr[hole-1]>value){
            inser_arr[hole] = inser_arr[hole-1];
            hole--;
        }
        inser_arr[hole]=value;

    }

    // Print After Sorting
    printf("\nAfter Sorting\n");
    for(int n=0;n<arr_size;n++){
        printf("%d ",inser_arr[n]);
    }

}
