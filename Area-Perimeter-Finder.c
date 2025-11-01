#include<stdio.h>
#include<math.h>
void square(){
    float a;
    printf("Enter side : ");
    scanf("%f",&a);
    float A=a*a;
    printf("\nArea is = %.2f",A);
    float P=4*a;
    printf("\nPerimeter is = %.2f",P);    
}
void rectangle(){
    float l,b;
    printf("Enter length : ");
    scanf("%f",&l);
    printf("Enter breadth : ");
    scanf("%f",&b);
    float A=l*b;
    printf("\nArea is = %.2f",A);
    float P=2*(l+b);
    printf("\nPerimeter is = %.2f",P);   
}
void triangle(){
    float s1,s2,s3;
    printf("Enter side 1 : ");
    scanf("%f",&s1);
    printf("Enter side 2 : ");
    scanf("%f",&s2);
    printf("Enter side 3 : ");
    scanf("%f",&s3);
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
          float P=s1+s2+s3;
        float h,b;
        printf("Enter height if known else enter 0 : ");
        scanf("%f",&h);
        if(h!=0){
            printf("Enter base : ");
            scanf("%f",&b);
            float A1=0.5*b*h;
            printf("\nArea is = %.2f",A1);
        }
        else if(h==0){
            float s=(s1+s2+s3)/2;
            float A2=sqrt(s*(s-s1)*(s-s2)*(s-s3));
            printf("\nArea is = %.2f",A2);
        }
        printf("\nPerimeter is = %.2f",P);
        }
    else printf("Not valid triangle !!!");
}
void circle(){
    float r;
    printf("Enter radius : ");
    scanf("%f",&r);
    float A=M_PI*r*r;
    printf("\nArea is = %.2f",A);
    float P=2*M_PI*r;
    printf("\nPerimeter/circumference is = %.2f",P);
}
void parallelogram(){
    float a,b,h;
    printf("Enter length of side (adjacent to base) : ");
    scanf("%f",&a);
    printf("Enter length of base : ");
    scanf("%f",&b);
    printf("Enter length of height : ");
    scanf("%f",&h);
    float A=h*b;
    printf("\nArea is = %.2f",A);
    float P=2*(a+b);
    printf("\nPerimeter is = %.2f",P);   
}
void rhombus(){
    float a,d1,d2;
    printf("Enter side : ");
    scanf("%f",&a);
    printf("Enter 1st diagonal : ");
    scanf("%f",&d1);
    printf("Enter 2nd diagonal : ");
    scanf("%f",&d2);
    float A=(d1*d2)/2;
    printf("\nArea is = %.2f",A);
    float P=4*a;
    printf("\nPerimeter is = %.2f",P);
}
void trapezium(){
    float a,b,c,h;
    printf("Enter length of non-parallel side : ");
    scanf("%f",&a);
    printf("Enter length of upper parallel side : ");
    scanf("%f",&b);
    printf("Enter length of lower parallel side : ");
    scanf("%f",&c);
    printf("Enter height : ");
    scanf("%f",&h);
    float A=0.5*(b+c)*h;
    printf("\nArea is = %.2f",A);
    float P=(2*a)+b+c;
    printf("\nPerimeter is = %.2f",P);
}
void kite(){
    float a,b,d1,d2;
    printf("Enter 1st side : ");
    scanf("%f",&a);
    printf("Enter 2nd side : ");
    scanf("%f",&b);
    printf("Enter 1st diagonal : ");
    scanf("%f",&d1);
    printf("Enter 2nd diagonal : ");
    scanf("%f",&d2);
    float A=(d1*d2)/2;
    printf("\nArea is = %.2f",A);
    float P=2*(a+b);
    printf("\nPerimeter is = %.2f",P);
}
void regularpentagon(){
    float a;
    printf("Enter side : ");
    scanf("%f",&a);
    float A=(1.0/4)*sqrt(5*(5+2*(sqrt(5))))*a*a;
    printf("\nArea is = %.2f",A);
    float P=5*a;
    printf("\nPerimeter is = %.2f",P);
}
void regularhexagon(){
    float a;
    printf("Enter side : ");
    scanf("%f",&a);
    float A=((3*sqrt(3))/2)*a*a;
    printf("\nArea is = %.2f",A);
    float P=6*a;
    printf("\nPerimeter is = %.2f",P);
}
void regularoctagon(){
    float a;
    printf("Enter side : ");
    scanf("%f",&a);
    float A=(2*(1+sqrt(2)))*a*a;
    printf("\nArea is = %.2f",A);
    float P=8*a;
    printf("\nPerimeter is = %.2f",P);
}
void ellipse(){
    float a,b;
    printf("Enter lenght of major axis : ");
    scanf("%f",&a);
    printf("Enter lenght of minor axis : ");
    scanf("%f",&b);
    a=a/2;
    b=b/2;
    float A=M_PI*a*b;
    printf("\nArea is = %.2f",A);
    float P=2*M_PI*sqrt(((a*a)+(b*b))/2);
    printf("\nPerimeter is (approx.) = %.2f",P);
}
void equilateraltriangle(){
    float a;
    printf("Enter side : ");
    scanf("%f",&a);
    float A=(sqrt(3)/4)*a*a;
    printf("\nArea is = %.2f",A);
    float P=3*a;
    printf("\nPerimeter is = %.2f",P);
}
int main(){
    int n;
    printf("\n--->WELCOME TO AREA AND PERIMETER CALCULATOR<---\n\nENTER 1:SQUARE\nENTER 2:RECTANGLE\nENTER 3:TRIANGLE\nENTER 4:CIRCLE\nENTER 5:PARALLELOGRAM\nENTER 6:RHOMBUS\nENTER 7:TRAPEZIUM\nENTER 8:KITE\nENTER 9:REGULAR PENTAGON\nENTER 10:REGULAR HEXAGON\nENTER 11:REGULAR OCTAGON\nENTER 12:ELLIPSE\nENTER 13:EQUILATERAL TRIANGLE\n-->ENTER YOUR NO. ACC. TO YOUR NEED : ");
    scanf("%d",&n);
    if(n==1) square();
    else if(n==2) rectangle();
    else if(n==3) triangle();
    else if(n==4) circle();
    else if(n==5) parallelogram();
    else if(n==6) rhombus();
    else if(n==7) trapezium();
    else if(n==8) kite();
    else if(n==9) regularpentagon();
    else if(n==10) regularhexagon();
    else if(n==11) regularoctagon();
    else if(n==12) ellipse();
    else if(n==13) equilateraltriangle();
    else printf("Not in list... Error!!!!");
    return 0;
}