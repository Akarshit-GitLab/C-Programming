// #include<stdio.h>
// int main(){
//     int n ;
//     printf("enter row = ");
//     scanf("%d",&n);
//     int m;
//     printf("enter column = ");
//     scanf("%d",&m);
//     for(int i = 1;i <=n;i++){
//         for(int j =1;j<=m;j++){
//             for(int k =1;k<=4;k++){
//                 printf("%d",k);
//             }
//         }
//         printf("\n");
//     }
//     return 0;

// }


//  ------------ or ------------------------------
#include<stdio.h>
int main (){
    int  n ;
    printf("enter no. of row = ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){  
        for(int j = 1;j<= n;j++){
        printf("%d",j);
        }
        printf("\n");
    }

    return 0;

}