#include<stdio.h>
int main(){
    float Celsius, kelvin, fahrenhiet;
    int choice;
    printf("choose the unit you want to convert :\n");
    printf("1.Kelvin\n");
    printf("2.Celsius\n");
    printf("3.fahrenhiet\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("Entre the temperature in kelvin :");
        scanf("%f", &kelvin);
        Celsius = (kelvin - 273.15);
        fahrenhiet = 1.8 *(kelvin - 273.15)+ 32.0;
        printf("In Celsius the value is :%f\n", Celsius);
        printf("IN fahrenhiet the value is :%f", fahrenhiet);
        break;

        case 2:
        printf("Entre the temperature in Celsius :");
        scanf("%f", &Celsius);
        kelvin = (Celsius + 273.15);
        fahrenhiet = (Celsius * 1.8) + 32.0;
        printf("In kelvin the value is :%f\n", kelvin);
        printf("IN fahrenhiet the value is :%f", fahrenhiet);
        break;

        case 3:
        printf("Entre the temperature in fahrenhiet :");
        scanf("%f", &fahrenhiet);
        kelvin = (fahrenhiet - 32.0) *5/9 + 273.15;
        Celsius = (fahrenhiet - 32.0) *5/9;
        printf("In Celsius the value is :%f\n", Celsius);
        printf("IN kelvin the value is :%f", kelvin);
        break;
    }
    printf("\n");
    return 0;
}