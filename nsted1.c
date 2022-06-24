#include <stdio.h>
int main(){

    int i,j,k;
    for(i=1; i<=2; i++){ //2
        printf("Outer loop\n");
        for(j=1; j<=3; j++){ //3
                printf("Hi\n");
            for(k=1; k<=3; k++){ //3
                printf("********\n");
            }
        }

    }

return 0;
}
