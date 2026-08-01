#include <stdio.h>
int main(){
    printf("Menu:\n");
    printf("1-FtoC\n");
    printf("2-CtoF\n");
    printf("3-FtoK\n");
    printf("4-KtoF\n");
    printf("5-ctoK\n");
    printf("6-KtoC\n");
    int choice;
    float temp;
    float celsius;
    float fahrenheit;
    float kelvin;
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter temperature in Fahrenheit:");
            scanf("%f",&temp);
            celsius=(temp-32)*5/9;
            printf("Temperature in Celsius: %.2f\n", celsius);
        // FtoC conversion
            break;
        case 2:
             printf("Enter temperature in Celsius:");
             scanf("%f",&temp);
            fahrenheit=temp*9/5+32;
            printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
        // CtoF conversion
             break;
        case 3:
             printf("Enter temperature in Fahrenheit:");
             scanf("%f",&temp);
            kelvin=(temp-32)*5/9+273.15;
            printf("Temperature in Kelvin: %.2f\n", kelvin);
        // FtoK conversion
             break;
        case 4:
            printf("Enter temperature in Kelvin:");
            scanf("%f",&temp);
            fahrenheit=(temp-273.15)*9/5+32;
            printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
        // KtoF conversion
            break;
        case 5:
            printf("Enter temperature in Celsius:");
            scanf("%f",&temp);
            kelvin=temp+273.15;
            printf("Temperature in Kelvin: %.2f\n", kelvin);
        // CtoK conversion
            break;
        case 6:
            printf("Enter temperature in Kelvin:");
            scanf("%f",&temp);
            celsius=temp-273.15;
            printf("Temperature in Celsius: %.2f\n", celsius);
        // KtoC conversion
            break;
        default:
            printf("Invalid choice!\n");
    
    }
    getchar();
    return 0;
}