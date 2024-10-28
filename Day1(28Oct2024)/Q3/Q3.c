//Ranit Parida
//2241016204

#include <stdio.h>
int main(){
int x;
int zero_count=0;
int minus_sum=0;
int plus_sum=0;
 printf("Enter ur number");
    scanf("%d",&x);
        if (x == 0) {
            zero_count+=1;
        } else if (x < 0) {
            minus_sum += x;
        } else if (x > 0) {
            plus_sum += x;
        }
    printf("Zero count: %d\n", zero_count);
    printf("Sum of negative numbers: %d\n", minus_sum);
    printf("Sum of positive numbers: %d\n", plus_sum); 
}