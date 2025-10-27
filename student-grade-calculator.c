#include<stdio.h>
float percent(float m1,float m2,float m3,float m4,float m5,int t){
    float p=((m1+m2+m3+m4+m5)/(5*t))*100;
    return p;
}
int main(){
    float m1,m2,m3,m4,m5,p;
    int t,t2;
    printf("Enter total mark of per subject : ");
    scanf("%d",&t);
    t2=t*5;
    printf("\nEnter mark of 1st subject : ");
    scanf("%f",&m1);
    if(m1>t || m1<0){ 
        printf("Invalid!! mark entry for m1...");
        return 0;
    }
    printf("Enter mark of 2nd subject : ");
    scanf("%f",&m2);
    if(m2>t || m2<0){
        printf("Invalid!! mark entry for m2...");
        return 0;
    }
    printf("Enter mark of 3rd subject : ");
    scanf("%f",&m3);
    if(m3>t || m3<0){
        printf("Invalid!! mark entry for m3...");
        return 0;
    }
    printf("Enter mark of 4th subject : ");
    scanf("%f",&m4);
    if(m4>t || m4<0){
        printf("Invalid!! mark entry for m4...");
        return 0;
    }
    printf("Enter mark of 5th subject : ");
    scanf("%f",&m5);
    if(m5>t || m5<0){
        printf("Invalid!! mark entry for m5...");
        return 0;
    }
    p=percent(m1,m2,m3,m4,m5,t);
    if (p >= 90) printf("\nGrade : A+ (Excellent)\n");
    else if (p >= 80) printf("\nGrade : A (Very Good)\n");
    else if (p >= 70) printf("\nGrade : B (Good)\n");
    else if (p >= 60) printf("\nGrade : C (Satisfactory)\n");
    else if (p >= 50) printf("\nGrade : D (Pass)\n");
    else printf("Grade : F (Fail)\n");
    printf("\n--->>> Total Mark obtained = %.1f%%/%d ",m1+m2+m3+m4+m5,t2);
    printf("\n--->>> Percentage obtained = %.2f \n",p);
    printf("\nThank you for using the Grade Calculator!\n");

}