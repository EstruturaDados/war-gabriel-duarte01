#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void attack(){
    int a;
    srand(time(NULL));
    a = rand() % 10 + 1;
    printf("%d", a);
}

int main(){
    attack();
}