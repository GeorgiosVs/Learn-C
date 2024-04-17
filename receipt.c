#include <stdio.h>
float gen1();          //Προτότυπο συνάρτησης gen1
float sale();          //Προτότυπο συνάρτησης sale
int quantity();        //Προτότυπο συνάρτησης quantity
void print();          //Προτότυπο συνάρτησης print
//--------------------------------------------------------------//
float ta,tp,ap; //
int plythos;    //  Καθολικές μεταβλητές
//--------------------------------------------------------------//
int main() {
    
    ta=gen1();    //Προτρεπτικό μήνυμα προς τον χρήστη να εισάγει τιμή
    
    tp=sale();    //Κάλεσμα συνάρτησης τιμής πώλησης
    
    ap=quantity()*tp;    //Πράξη ποσότητας * τιμή πώλησης
    
    print(); //Εκτύπωση Logo
    
    //Μήνυμα αποτελέσματος
    printf("\nProducts quantity is %d and the price you have to pay is $%.2f \n",plythos,ap);
    return 0;
}





//Κάλεσμα όλων των συναρτήσεων στο πρόγραμμα main()
float gen1(){
    printf("\nEnter the buyers price :");       //  <-- Συνάρτηση τιμής αγοράς
    scanf("%f", &ta);
    printf("\nBuyers price is : $%.2f ",ta);
    return ta;
}

float sale(){
    tp=ta*1.5;
    printf("\nSales price is : $%.2f ",tp);     //  <-- Συνάρτηση τιμής πώλησης
    return tp;
}

int quantity(){
    printf("\n\nEnter quantity of products :"); //  <-- Συνάρτηση η οποία εκτυπώνει και καταγράφη την ποσότητα των προιόντων
    scanf("%d",&plythos);
    return plythos;
}

void print(){
    printf("\n------------------------\n");
    printf("\n\t\tReceipt\n");                  //  <-- Απλή συνάρτηση εκτύπωσης απόδειξης
    printf("\n------------------------\n");
}

