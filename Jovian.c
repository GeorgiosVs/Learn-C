#include<stdio.h>
int main(void){
    
    float e_days;   //Earth days
    float j_years;  //Jovian years
    
    //Input Earth days
    printf("Enter number of earth days :");
    scanf("%f", &e_days);
    
    //Calculation Jovian years
    j_years = e_days / (365.0 * 12.0);
    
    //Solution
    printf("Equivalent Jovian years : %f", j_years);
    
    return 0;
}

/*
Program in C language that calculates Earth days into Jovian Planet Years. 
It takes 4380 Earth days to achieve 1 Jovian Year.
*/