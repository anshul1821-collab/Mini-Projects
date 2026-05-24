#include<stdio.h>
#include<stdlib.h> //rand
#include<time.h> //time
#include<string.h> //string
#include<conio.h> //getch
int main(){
    char a[10];
    printf("Ready for game - guess the number(yes/no) : ");
    scanf("%s",a);
    while(strcmp(a,"yes")==0 || strcmp(a,"YES")==0 || strcmp(a,"Yes")==0){
        system("cls"); //clears screen
        int n;
        printf("\nEnter your limit for last digit : \n");
        scanf("%d",&n);
        srand(time(NULL)); // changes time -> random number all time 
        int r = rand()%(n+1); // generates random nummber from 0 to n
        int g,c=0;
        while(g!=r){
            printf("Guess the num : ");
            scanf("%d",&g);
            c=c+1;
            if(g<r) printf("\nThe number is greater than your guess !! \n");
            else if(g>r) printf("The number is less than your guess !! \n\n");
        }
        printf("\nCongo...Guessed correct number !! \n");
        printf("Number of Guesses : %d \n\n",c);
        printf("Want to play again ?(yes/no) : ");
        scanf("%s",a);
    }
    printf("\nThank you for joining !! ");
    
    while (getchar() != '\n' && getchar() != EOF); // exit
    printf("\nPress any key to exit...");
    getch();
    return 0;
}