
#include<stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i = 2; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r){
    int NCR = factorial(n) / (factorial(r) * factorial(n - r));
    return NCR;
}

int main(){
    int n;
    printf("Enter the n = ");
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++){
        
        
        for(int j = 0; j < n - i; j++){
            printf("  ");
        }
        
        for(int k = 0; k <= i; k++){  // Fix: loop should go from 0 to i
            printf("%4d", combination(i, k));
        }
        printf("\n");
    }
}
