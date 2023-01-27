// Bubble Sort in C and C++
// Time Complexity O(n^2)
// Space Complexity O(1) 


#include <bits/stdc++.h>

int main(){
    int ar_size,swap,temp;
    int bub[101];
    
    //input array size
    printf("Enter the array size: ");
    scanf("%d",&ar_size);
    
    // input array element
    printf("Enter the value of the array:\n");
    for (int n=0;n<ar_size;n++) {
        scanf("%d",&bub[n]);
    }
    
    // Print before sorting
    printf("\nBefore Sorting: \n");
    for (int n=0;n<ar_size;n++) {
        printf("%d ",bub[n]);
    }

    for (int i = 0; i < ar_size-1; i++) {
        swap=0;
        for (int j = 0; j <ar_size-1-i ; j++) {
             //Swap Two Number
            if(bub[j]>bub[j+1]){
                temp=bub[j];
                bub[j]=bub[j+1];
                bub[j+1]=temp;
                swap=1;
            }
        }
        // If array already sorted ,the programme stop
        if (swap==0){
            break;
        }

    }
    
    // Print After Sorting
    printf("\nAfter Sorting\n");
    for (int n=0;n<ar_size;n++) {
        printf("%d ",bub[n]);
    }

}
