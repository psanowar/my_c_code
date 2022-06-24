#include<stdio.h>
int main(){

int i;
for(i = 1; i <= 10; i++){
    //printf("How are you\n");
    if(i % 2 == 0)
        continue;
    printf("%d\n", i);
}


return 0;
}
