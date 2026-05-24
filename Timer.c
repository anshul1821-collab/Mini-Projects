#include<stdio.h>
#include<windows.h>
int main(){
    int h,m,s;
    printf("\033[0;93mEnter Hours , Minutes , Seconds : ");
    scanf("%d%d%d",&h,&m,&s);
    while(1){
        Sleep(1000);

        if(h==0 && m==0 && s==0){
            printf("\n \033[0;91m!!! Times over !!! \n");
            for(int i=0;i<=10;i++){
                Beep(1000 , 500); // (frequency,duration)
            }
            break;
        }
   
        s--;
        if(s<0){
            s=59;
            m--;
        }
        if(m<0){
            m=59;
            h--;
        }

        printf(" \r\033[0;34mClock -->> %02d:%02d:%02d ",h,m,s);
    }
    return 0;
}