
int combination(int n, int r){
    int NCR = factorial(n) / (factorial(r) * factorial(n - r));
    return NCR;
}

int main(){
    int n;
    printf("Enter the n = ");