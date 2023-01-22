#include <stdio.h>
int plus1(int x){
    return x + 1;
}
int singleMath(int (*f)(int a),int b){
    return f(b);
}

int main(){
    printf("%d\n", singleMath(plus1,9));
    return 0;
}