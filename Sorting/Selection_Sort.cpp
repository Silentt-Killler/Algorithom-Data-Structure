// Selection Sort in C++
// Time Complexity O(n^2)
// Space Complexity O(1)

#include <bits/stdc++.h>

int main(){
    int selection_arr[101];
    int arr_size,mini_index,temp;

    //input array size
    printf("Enter the array size : \n");
    scanf("%d",&arr_size);

    // input array element
    printf("Enter the value of the array; \n");
    for(int n=0;n<arr_size;n++){
        scanf("%d",&selection_arr[n]);
    }

    // Print before sorting
    printf("\nBefore Sorting\n");
    for(int n=0;n<arr_size;n++){
        printf("%d ",selection_arr[n]);
    }

    //Outer loop iterate over all number
    for(int i=0;i<arr_size;i++){
        mini_index = i;
        // Inner loop to find the minimum_index
        for(int j=i+1;j<arr_size;j++){
            if(selection_arr[j]< selection_arr[mini_index]){
                mini_index=j;
            }

        }

        // Sawp teo Number(i & mini_index)
        if(mini_index != i){
            temp=selection_arr[i];
            selection_arr[i]=selection_arr[mini_index];
            selection_arr[mini_index]=temp;
        }

    }

    // Print After Sorting
    printf("\nBefore Sorting\n");
    for(int n=0;n<arr_size;n++){
        printf("%d ",selection_arr[n]);
    }

}
