#include<stdio.h>

float cf(float c){
    float f=(c*9/5)+32;
    return f;
}

float ck(float c){
    float k=c+273.15;
    return k;
}

float fc(float f){
    float c=(f-32)*5/9;
    return c;
}

float kc(float k){
    float c=k-273.15;
    return c;
}

int main(){
    int n;
    printf("\n--->ENTER 1 : FOR- Celsius to  Fahrenheit \n--->ENTER 2 : FOR- Celsius to Kelvin \n--->ENTER 3 : FOR- Fahrenheit to Celsius \n--->ENTER 4 : FOR- Fahrenheit to Kelvin \n--->ENTER 5 : FOR- Kelvin to Celsius \n--->ENTER 6 : FOR- Kelvin to Fahrenheit \n\nENTER YOUR NUMBER ACCORDING TO YOUR CONVERSION : ");
    scanf("%d",&n);
    float t;
    if(n==1){
        printf("\nEnter Celsius value : ");
        scanf("%f",&t);
        float t2=cf(t);
        printf(" %.2f°C = %.2f°F\n",t,t2);
    }
    else if(n==2){
        printf("\nEnter Celsius value : ");
        scanf("%f",&t);
        float t2=ck(t);
        printf(" %.2f°C = %.2f°K\n",t,t2);
    }
    else if(n==3){
        printf("\nEnter Fahrenheit value : ");
        scanf("%f",&t);
        float t2=fc(t);
        printf(" %.2f°F = %.2f°C\n",t,t2);
    }
    else if(n==4){
        printf("\nEnter Fahrenheit value : ");
        scanf("%f",&t);
        float c=fc(t);
        float k=ck(c);
        printf(" %.2f°F = %.2f°K\n",t,k);
    }
    else if(n==5){
        printf("\nEnter Kelvin value : ");
        scanf("%f",&t);
        float t2=kc(t);
        printf(" %.2f°K = %.2f°C\n",t,t2);
    }
    else if(n==6){
        printf("\nEnter Kelvin value : ");
        scanf("%f",&t);
        float c=kc(t);
        float f=cf(c);
        printf(" %.2f°K = %.2f°F\n",t,f);
    }
    else printf("\nError !! Not instructed number..Invalid input\n");
    
    return 0;
}