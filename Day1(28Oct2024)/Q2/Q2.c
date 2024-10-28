//Ranit Parida
//2241016204

#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter ur first number");
    scanf("%d",&x);
     printf("Enter ur Second number");
    scanf("%d",&y);
    z=x-y;
    if(z<0){
        y=y-x;
    }
    else{
        y=x-y;
    } 
    printf("The absolute difference is %d",y);
}