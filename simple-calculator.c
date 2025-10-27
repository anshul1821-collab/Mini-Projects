#include<stdio.h>
#include<math.h>
int main(){
    char o;
    int a,b;
    printf("\nenter a operation i.e. from ( + , - , / , * , ^ , &[for sqrt] ) : ");
    scanf(" %c",&o);
    if(o=='&'){
        int s;
        double sr;
        printf("Enter a num : ");
        scanf("%d",&s);
        sr=sqrt(s);
        printf("\n%d Square root is %.2f",s,sr);
    }
    else if(o=='+' || o=='-' || o=='/' || o=='*' || o=='^'){
        printf("\nFor power -- a as base and b as power\nEnter a and b respectively leaving a space between them : ");
        scanf("%d %d",&a,&b);
        if(o=='+'){
            float s;
            s=a+b;
            printf("\nsum is %.2f",s);
        }
        else if(o=='-'){
            float m;
            m=a-b;
            printf("\nsubtract is %.2f",m);
        }
        else if(o=='/'){
            if(b==0) printf("Error : division by zero not allowed.");
            else{ 
                float d;
                d=(float)a/b;
                double r=fmod(a,b); //fmod compute the remainder after deviding 2 floats only in math.h
                printf("\nquotient is %.2f",d);
                //printf("\nremainder is %f",r);
            }
        }   
        else if(o=='*'){
            float p;
            p=a*b;
            printf("\nproduct is %.2f",p);
        }
        else if(o=='^'){
            int e=1;
            for(int i=1;i<=b;i++){
                e=e*a;
            }
            printf("\n%d to the power %d is %d",a,b,e);
        }
    }
    else printf("Error : Invalid operator");
    return 0;
}