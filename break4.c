#include<stdio.h>
int main(){

int i;
for(i=1; i<=4; i++){
    printf("Wish you\n\n");
    if(i==2)
        continue;
    printf("*\n");
    printf("**\n");
}


return 0;
}
