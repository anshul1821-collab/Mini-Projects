#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    char a[10];
    int c=0,n=5,r;
    printf("\nWelcome to Quiz Game....\n");
    printf("Total number of questions is 5.\n");
    printf("Ready to Check your Brain (Yes/No) ? : ");
    scanf("%s",a);
    srand(time(NULL));

    int used[6] = {0}; // 6 because our questions start from 1 to 5 acc. to random num generator
    //  Index	Value
    // used[1]	  0
    // used[2]	  0
    // used[3]	  0
    // used[4]	  0
    // used[5]	  0

    if(strcmp(a,"yes")==0 || strcmp(a,"Yes")==0 || strcmp(a,"YES")==0){ //if the string is same strcmp returns 0 value
        for(int i=0;i<5;i++){
            char o;
            
            do{
                r=(rand()%n)+1; // Do not permit to repeat 1 question again and again
            }while(used[r]==1);
            used[r]=1;
            // do while run atleast once all time -> generates a random num -> checks if it is used(1) -> if not than the loop stop no other number generates -> the value in array becomes 1 means used once -> the condition checks if the number is used(1) if used it runs the loop again and generates a random number again 

            if(r==1){
                printf("\nQ%d. Which organelle is known as the 'powerhouse of the cell'?\n",i+1);
                printf("A) Ribosome\n");
                printf("B) Mitochondria\n");
                printf("C) Endoplasmic Reticulum\n");
                printf("D) Golgi Apparatus\n");
                printf("Enter your option (A/B/C/D) : ");
                scanf(" %c",&o);
                if(o=='B'||o=='b'){
                    printf("Correct Answer !! (+1) \n");
                    c=c+1;
                }
                else{
                    printf("Wrong Answer !! \n");
                    printf("Correct Answer is 'B'\n");
                }    
                
            }

            else if(r==2){
                printf("\nQ%d. What is the basic structural and functional unit of life?\n",i+1);
                printf("A) Tissue\n");
                printf("B) Cell\n");
                printf("C) Organ\n");
                printf("D) Organism\n");
                printf("Enter your option (A/B/C/D) : ");
                scanf(" %c",&o);
                if(o=='B'||o=='b'){
                    printf("Correct Answer !! (+1) \n");
                    c=c+1;
                }
                else{
                    printf("Wrong Answer !! \n");
                    printf("Correct Answer is 'B'\n");
                } 
            }

            else if(r==3){
                printf("\nQ%d. Which pigment is responsible for photosynthesis in plants?\n",i+1);
                printf("A) Carotene\n");
                printf("B) Chlorophyll\n");
                printf("C) Xanthophyll\n");
                printf("D) Anthocyanin\n");

                printf("Enter your option (A/B/C/D) : ");
                scanf(" %c",&o);
                if(o=='B'||o=='b'){
                    printf("Correct Answer !! (+1) \n");
                    c=c+1;
                }
                else{
                    printf("Wrong Answer !! \n");
                    printf("Correct Answer is 'B'\n");
                } 
            }

            else if(r==4){
                printf("\nQ%d. Which blood cells help in clotting?\n",i+1);
                printf("A) RBC\n");
                printf("B) WBC\n");
                printf("C) Platelets\n");
                printf("D) Plasma\n");
                printf("Enter your option (A/B/C/D) : ");
                scanf(" %c",&o);
                if(o=='C'||o=='c'){
                    printf("Correct Answer !! (+1) \n");
                    c=c+1;
                }else{
                    printf("Wrong Answer !! \n");
                    printf("Correct Answer is 'C'\n");
                } 
            }

            else if(r==5){
                printf("\nQ%d. In humans, the exchange of oxygen and carbon dioxide takes place in the-\n",i+1);
                printf("A) Trachea\n");
                printf("B) Bronchi\n");
                printf("C) Alveoli\n");
                printf("D) Diaphragm\n");
                printf("Enter your option (A/B/C/D) : ");
                scanf(" %c",&o);
                if(o=='C'||o=='c'){
                    printf("Correct Answer !! (+1) \n");
                    c=c+1;
                }
                else{
                    printf("Wrong Answer !! \n");
                    printf("Correct Answer is 'C'\n");
                } 
            }
        }
        printf("Total Points = %d ",c);
    }
    while (getchar()!='\n' && getchar()!=EOF); // exit
    printf("\nPress any key to exit...");
    getch();
    return 0;
}
// loop -> random number -> random question sequence 