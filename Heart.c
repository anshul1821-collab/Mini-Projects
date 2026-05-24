#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main(){
    int n = 7; 
    int m = n + 2; // width = 9
    
    int a9 = m;
    int a5 = (m + 1) / 2;
    int a2 = (a5 - 1) / 2;
    int a3 = (a5 + 1) / 2;
    int a7 = m - a2;
    int a1 = a2 - 1;
    int a8 = m - a1;
    int a4 = a9 - a5;
    int a6 = a9 - a3;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            
            int c = 0;

            if(i==0 && (j==a2 || j==a3 || j==a7 || j==a8)) c = 1;
            else if(i==1 && (j==a1 || j==a4 || j==a6 || j==a9)) c = 1;
            else if(i==2 && (j==a1 || j==a5 || j==a9)) c = 1;
            else if(i==3 && (j==a1 || j==a9)) c = 1;
            else if(i==4 && (j==a2 || j==a8)) c = 1;
            else if(i==5 && (j==a3 || j==a7)) c = 1;
            else if(i==6 && (j==a4 || j==a6)) c = 1;
            else if(i==7 && (j==a5)) c = 1;

            Sleep(100);  
            if(c==1) printf("\033[31m* \033[0m"); //red-  \033[31m
            else printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;
}

//  * * * * *    *        *
//      *        *        *
//      *        *        *
//      *        *        * 
//      *         *      * 
//  * * * * *       *  *           
