 #include<stdio.h>
 int main(){
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    int a =1;
    for(int i =1;i<=n;i++){
        if(i%2!=0) a= 1;
        else a=0;
        for(int j =1;j<=i;j++){
            if( a==0) a = 1;
            else a=0;

            printf("%d ",a);
            // a++;

        }
        printf("\n");
    }
 
 }