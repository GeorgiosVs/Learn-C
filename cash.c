#include<stdio.h>
float convert(void);

int main(void){
    printf("\nGBP £%0.4f", convert());
    return 0;
}

float convert(void){
    float dollars;

    printf("Enter the amount of $ USD: ");
    scanf("%f", &dollars);
    return dollars / 1.29114;
}

//Program converts USD $ to GBP £
//£1 = $1.29114