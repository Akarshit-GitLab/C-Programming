#include<stdio.h>
int main(){
    int n ;
    printf("enter the number of row = ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int a;
        for(int j=1;j<=n;j++){
            a = n/2 +1;
            if(j ==a || i == a){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}