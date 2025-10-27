#include<stdio.h>
float si(float p,float r,int t){
    float b=p*r*t/100;
    return b;
} 
float power(float a,int b,float x){
    if(b==0){
        return x;
    }
    x=x*a;
    return power(a,b-1,x);  
}
float ci(float p,float r,int t,int n){
    int b=n*t;
    float a=1+(r/(100*n));
    float c=power(a,b,1);
    float A=p*c;
    return A;
}
int main(){
    int m,t;
    float p,r;
    printf("\nENTER 1 :: FOR SIMPLE INTEREST \nENTER 2 :: FOR COMPOUND INTEREST \nENTER YOUR CHOICE : ");
    scanf("%d",&m);
    printf("\nEnter principle : ");
    scanf("%f",&p);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time (in years) : ");
    scanf("%d",&t);
    if(m==1){
        float s=si(p,r,t);
        printf("\nInterest Amount according to your data : %.2f ",s);
        printf("\nYour principle amount : %.2f ",p);
        printf("\nTotal amount will be : %.2f\n",p+s);
    }
    else if(m==2){
        int n;
        printf("Enter Number of time it is compounded in a year : ");
        scanf("%d",&n);
        float s=ci(p,r,t,n);
        printf("\nInterest Amount according to your data : %.2f ",s);
        printf("\nYour principle amount : %.2f ",p);
        printf("\nTotal amount will be : %.2f\n",p+s);
    }
    else printf("Error!! not instructed number");
    return 0;
}