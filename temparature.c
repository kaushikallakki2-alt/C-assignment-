#include <stdio.h>
int main(){
    int a;
    float b;
    printf("Enter the temparature in faranheit: ");
    scanf("%d", &a);
    b = (float)(a - 32) * 5 / 9;
    printf("the temparature in faranheit is: %d\n", a);
    printf("the temparature in celcius is: %.2f", b);
    return 0;

}