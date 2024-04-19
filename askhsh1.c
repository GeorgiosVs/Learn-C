/*Πρόγραμμα που διαβάζει τις ώρες της εβδομάδος κάθε εργαζομένου
 τον τύπο εργασίας και το ποσό που πλήρωσε συνολικά ο εργοδότης.*/
#include <stdio.h>

int main(){
    //Δήλωση μεταβλητών.
    int apol,sum,wres;
    int apol1=5;
    int apol2=9;
    int apol3=20;
    int tameio1=0,tameio2=0,tameio3=0;
    int ypal=0;
    char epilogi;
    int synolo=0;
    
    //Ορίζουμε ότι μόλις οι καταχωρίσεις φτάσουν στον αριθμό 10 το πρόγραμμα θα σταματήσει να λειτουργεί.
    while(ypal<10){
        printf("===  Eiste o %d ypalhlos  ===\n\n",++ypal);
        
        //Μήνυμα προς τον χρήστη ότι πρέπει να πατήσει 1, 2 ή 3 ανάλογα με την λειτουργία που επιθυμεί.
        printf("Dialexe ton typo ergasias soy: 1) 5$/h 2) 9$/h 3) 20$/h:\t");
        scanf("%d", &apol);
        //Μήνυμα προς τον χρήστη για να δηλώσει πόσες ώρες δούλεψε ο υπάλληλος την εβδομάδα.
        printf("Poses wres doylepsate: ");
        scanf("%d", &wres);
        
        //Παρακάτω αρχίζουν οι πράξεις για τον κάθε τύπο εργασίας που έχει ορίσει ο πελάτης μας για τους εργαζόμενους του.
        switch(apol){
            case 1:sum=apol1*wres;
                tameio1++;
                synolo +=sum;
                printf("Elafria ergasia gia %d wres 5$/h: %d$\n",wres,sum);
                break;
                
            case 2:sum=apol2*wres;
                tameio2++;
                synolo +=sum;
                printf("Kanonikh ergasia gia %d wres 9$/h: %d$\n",wres,sum);
                break;
                
            case 3:sum=apol3*wres;
                tameio3++;
                synolo +=sum;
                printf("Baria ergasia gia %d wres 20$/h: %d$\n",wres,sum);
                break;
            
            //Σε περίπτωση που ο χρήστης πατήσει κάτι διαφορετικό του 1, 2, 3 του εμφανίζουμε το πρακάτω μήνυμα.
            default:printf("Parakalw pathste apo to 1 mexri to 3 gia typo ergasias.\n\n");
        }
        
        
        //Εδώ ρωτάμε τον χρήστη αν θέλει να συνεχίσει.
                printf("\nThelete na synexisete? 'y' or 'n': ");
                scanf(" %c", &epilogi);
        //Δίνουμαι επιλογή να πατήσει τον χαρακτήρα n ή N και να διακοπή το πρόγραμμα.
        if (epilogi =='n' || epilogi=='N'){
            break;
        }
    }
    
    //Εδώ εκτυπώνουμε τα σύλονα που έχει εισάγει ο χρήστης εφόσον τερματίσει το πρόγραμμα.
        printf("Elafria ergasia: %d ypalhloi\n",tameio1);
    
        printf("Kanonikh ergasia: %d ypalhloi\n",tameio2);
    
        printf("Baria ergasia: %d ypalhloi\n",tameio3);
    
        printf("\nTo logisthrio plhrwse %d$ se %d ypalylous ayth thn ebdomada\n\n",synolo,ypal);
        
        return 0;
}
