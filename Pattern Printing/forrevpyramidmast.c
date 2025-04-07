#include<stdio.h>
int main(){
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    int nsn =n;// number of line 
    int nsp =1;

    for(int i =1;i<=n;i++){
     printf("%d ",i); 
    }
    for(int i =n-1;i>=1;i--){
        printf("%d ",i);
    }
    printf("\n");
    for(int i =1 ;i<=n;i++){
        for(int j =1;j<=nsn -1 ;j++){
            printf("%d ",j);
        }
        for(int k =1;k<=nsp;k++){
            printf("  ");
        }
        for(int l =nsn -1;l>=1;l--){
            printf("%d ",l);
        }
        nsn--;
        nsp +=2;
        printf("\n");
    }

}
