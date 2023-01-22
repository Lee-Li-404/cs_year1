#include <stdio.h>

int main(){
    typedef struct{
        int weight;
        int height; 
        char friend[10];
    } dog;
    dog a;
    a.height = 99;
    a.weight =0;
    a.friend[0] = 'x';
    dog b[10];
    b[3].friend[0] = 'f';
    printf("height is %d\nweight is %d\n", a.height,a.weight);
    printf("the friend's name is %c\n",b[3].friend[0]);
    return 0;
}