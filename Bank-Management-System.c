// Bank Management System 🏦
// → Store name, balance, account number (array or struct).
// → Allow deposit, withdrawal, and balance check.

#include<stdio.h>
#include<string.h>
typedef struct Data{
    char name[50];
    float balance;
    int acc_num;
}data;

int main(){
    char m[10];
    printf("If want to enter data (yes/no) : ");
    scanf("%9s",m);
    int n=100;
    int e;
    char ch[10];
    data arr[n];
    for(int i=0;i<n;i++){
        printf("Enter data for %d person --> \n",i+1);
        printf("Enter Name : ");
        scanf(" %[^\n]s",arr[i].name);
        printf("Enter balance : ");
        scanf(" %f",&arr[i].balance);
        printf("Enter Account number : ");
        scanf(" %d",&arr[i].acc_num);
        e=i+1;
        printf("\nWant to enter data for another person (yes/no) : ");
        scanf(" %9s",ch);
        if(strcmp(ch,"no")==0){
            printf("\nData uploaded !!! \n");
            break;
        }
    }



    int c;
    int found=0;
    printf("\nPress 1 to Deposit \nPress 2 to Withdraw \nPress 3 to check balance \nEnter number according to your requirement : ");
    scanf("%d",&c);
    if(c==1){
        int a;
        float s;
        printf("\nEnter you Account number : ");
        scanf("%d",&a);
        printf("Enter amount to be added : ");
        scanf("%f",&s);
        for(int i=0;i<e;i++){
            if(a==arr[i].acc_num){
                found=1;
                arr[i].balance = s + arr[i].balance;
                printf("\nOwner of account : %s ",arr[i].name);
                printf("\nCurrent total Balance : %.2f ",arr[i].balance);
                break;
            }
        }
        if(found==0){
            printf("Account number invalid !!! ");
        }
    }


    else if(c==2){
        int a;
        float w;
        printf("\nEnter you Account number : ");
        scanf("%d",&a);
        printf("Enter amount to withdraw : ");
        scanf("%f",&w);
        for(int i=0;i<e;i++){
            if(a==arr[i].acc_num){
                found=1;
                if(w > arr[i].balance){
                    printf("Not enough balance !! ");
                    break;
                }
                else{
                    arr[i].balance = arr[i].balance - w ;
                    printf("\nOwner of account : %s ",arr[i].name);
                    printf("\nCurrent total Balance : %.2f ",arr[i].balance);
                    break;
                }
            }
        }
        if(found==0){
            printf("Account number invalid !!! ");
        }
    }


    else if(c==3){
        int a;
        printf("\nEnter you Account number : ");
        scanf("%d",&a);
        for(int i=0;i<e;i++){
            if(a==arr[i].acc_num){
                found=1;
                printf("\nOwner of account : %s ",arr[i].name);
                printf("\nCurrent total Balance : %.2f ",arr[i].balance);
                break;
            }
        }
        if(found==0){
            printf("Account number invalid !!! ");
        }
    }
    else{
        printf("Enter invalid command !!!");
    }

    return 0;
}