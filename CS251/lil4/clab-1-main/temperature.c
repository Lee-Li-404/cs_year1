#include <stdio.h>
/*this main function takes in a float in degree Fahrenheit and converts it to degree celsius and print*/
/*"invalid temperature" will be printed if input is smaller or equal to -459.67*/
int main(){
    float temp_f;
    scanf("%f",&temp_f);
    if (temp_f <= -459.67){
            printf("Invalid temperature.");
    }
    else{
        float temp_c = (temp_f - 32) * 5/9;
        printf("the temperature in degree Celsius is %f\n",temp_c);
    }
    return 0;
}