#include <stdio.h>

int main(){
    
    int num[5];
    int i;
    
    for (i=0; i<5; i++) {
        printf("\nInsert an integer of %d place :",i);
        scanf("%d", &num[i]);
    }

    for (i=0; i<5; i++) {
        printf("\nIn place %d i have the price %d also my address is  %d\n ",i,num[i],&num[i]);
    }
    printf("\n% d\n",num); // Here printing the starting num address
    return 0;
}


