#include<stdio.h>
int factorial(int n){
    int fact =1;
    for(int i =2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    // for(int i = 2;i<=n;i++){
    //     int fact =1;
    //     fact = fact *i;
    // }
    printf("factorial of %d is %d",n,factorial(n));

        return 0;
    
    
}
