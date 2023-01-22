#include <stdio.h>
#include <stdlib.h>
/*this main function takes in a float in degree Fahrenheit and converts it to degree celsius and print*/
/*"invalid temperature" will be printed if input is smaller or equal to -459.67*/
int main(){
    float *temp_f = malloc(sizeof(float));
    float *temp_c = malloc(sizeof(float));
    scanf("%f",temp_f);
    if (*temp_f <= -459.67){
            printf("Invalid temperature.");
    }
    else{
        *temp_c = (*temp_f - 32) * 5/9;
        printf("the temperature in degree Celsius is %f\n",*temp_c);
    }
    free(temp_f);
    free(temp_c);
    return 0;
}