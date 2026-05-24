#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main(){
    int a[4]={7,8,12,13};
    int b[11]={0,1,2,3,4,6,9,11,14,16,21};
    int c[6]={2,6,10,14,16,21};
    int d[5]={2,6,14,16,21};
    int e[5]={2,7,13,16,21};
    int f[5]={2,8,12,17,20};
    int g[9]={0,1,2,3,4,9,11,18,19};
    int h[1]={10};

    // int p1[5]={7,8,10,12,13};
    // int p2[6]={7,8,9,11,12,13};
    // int p3[7]={7,8,9,10,11,12,13};
    // int p4[5]={8,9,10,11,12};
    // int p5[3]={9,10,11};
    // int p6[1]={10};
    printf("\n\033[33mFOR YOU...DARLU \U0001F601 \033[0m ");
    
    Sleep(75);
    printf("\n\nLoading.... for MADAMJI");

    printf("\n\n\033[35m From Anshul, First skill gift to my personal motivator...DEWANSHA \033[0m");
    printf("\n\n\033[31m >______Hate you godhu______<\033[0m");

    for(int i=-3;i<=12;i++){
        for(int j=0;j<=21;j++){
            int z=0;

            if(i==0){
                for(int k=0;k<4;k++){
                    if(j==a[k]) z=1;
                }
            }

            if(i==1){
                for(int k=0;k<11;k++){
                    if(j==b[k]) z=1;
                }
                
            }

            if(i==2){
                for(int k=0;k<6;k++){
                    if(j==c[k]) z=1;
                }
            }

            if(i==3){
                for(int k=0;k<5;k++){
                    if(j==d[k]) z=1;
                }
            }

            if(i==4){
                for(int k=0;k<5;k++){
                    if(j==e[k]) z=1;
                }
            }

            if(i==5){
                for(int k=0;k<5;k++){
                    if(j==f[k]) z=1;
                }
            }

            if(i==6){
                for(int k=0;k<9;k++){
                    if(j==g[k]) z=1;
                }
            }

            if(i==7){
                for(int k=0;k<1;k++){
                    if(j==h[k]) z=1;
                }
            }

            Sleep(50);  
            if(z==1) printf("\033[95m* \033[0m"); //red- \033[31m   //pink- \033[95m  //yellow- \033[33m //reset- \033[0m 
            else printf("  ");
        }
        printf("\n");
    }
    // printf("\033[35m From Anshul, First skill gift to my personal motivator...DEWANSHA \033[0m \2764\n");
    // printf("\033[31m \u2764______Hate you godhu______\u2764\033[0m");
    getch(); //holds the black screen
    return 0;
}

