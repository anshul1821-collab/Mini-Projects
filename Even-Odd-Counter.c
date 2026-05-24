#include<stdio.h>
int main(){
    int n;
    printf("\nEnter no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int ce=0,co=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ce=ce+1;
        }
    }
    co=n-ce;
    printf("\nNumber of even numbers in list is : %d",ce);
    printf("\nNumber of even numbers in list is : %d",co);

    return 0;
}