#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main(){
    int h,m,s;
    printf("Enter starting time (hh,mm,ss) : ");
    scanf(" %d %d %d",&h,&m,&s);
    while(1){
        //system("cls");
        // if(Sleep(1000))  is wrong as sleep doesnot return any value it just     delay the program

        Sleep(1000);
        s++;

        if(s==60){
            s=0;
            m++;
        }

        if(m==60){
            m=0;
            h++;
        }

        if(h==24){
            h=0;
        }

        printf("\rClock -->> %02d:%02d:%02d ",h,m,s);
    }
    return 0;
}

// \r can be used to overwrite the elements 
// ex - printf("ABC\rDEF");
// O/p - DEF
// DEF overwrites on ABC