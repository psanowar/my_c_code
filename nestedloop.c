#include<stdio.h>
int main(){

    int i,j;
    for(i=1; i<= 3; i++){
        printf("This is outer loop\n");

        for(j=1; j<=4; j++){
            printf("This is inner loop\n");
        }
        printf("Outer loop end\n");
    }

return 0;
}
