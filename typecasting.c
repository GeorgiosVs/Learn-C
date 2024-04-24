#include <stdio.h>
int main() {
    
    int num1;
    char c1;
    int sum=0;
    int counter1=0;
    
    do{
        counter1++;
        printf("Dwste thn vathmologia kathe spoudasth apo to 0 mexri to 10 : ");
        scanf("%d",&num1);
        
        
        sum+=num1;
        printf("--- Dwse @ gia exodo --- \n");
        scanf("%c",&c1);
    }while(c1!='@');
    printf("\no MO einai: %f\n",(float)sum/counter1);
    
    return 0;
}
