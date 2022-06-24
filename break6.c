#include<stdio.h>
int main(){

int i;
for(i = 7; i <= 10; i++){
    //printf("How are you\n");
    if(i % 2 == 0)
        break;
    printf("%d\n", i);
}


return 0;
}
