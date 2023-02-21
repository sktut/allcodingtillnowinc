#include <stdio.h>
int sum(int n){
    int s;
    for(int i=1;i<=n;i++ ){
        s=s+i;
    }
    return s;
}
int main(){
    int n;
    printf("enter the number till you want the sum=");
    scanf("%d", &n);
    printf("sum = %d", sum(n));
    return 0;
}