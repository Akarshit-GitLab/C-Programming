#include<stdio.h>
int factorial(int n){
    int fact =1;
    for(int i =2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("Enter the n = ");
    scanf("%d",&n);
    printf("enter the r = ");
    scanf("%d",&r);
    int ncr =1;
    printf("NCR = %d ",factorial(n)/(factorial(r)*factorial(n-r)));

}