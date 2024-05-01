#include <stdio.h>
#include <stdlib.h>

/*
BMI Calculator
formula: BMI = (weight / (height * height) * 703)
normal BMI is between 18.50 and 25.00
*/

double calculate_bmi(double weight, double height);

int main() {
    double weight;
    double feet;
    double inches;
    double height;
    double bmi;

    // Get input 
    printf("What is your weight in pounds? ");
    scanf("%lf", &weight);
    printf("What is your height in feet? ");
    scanf("%lf",  &feet);
    printf("How many inches? ");
    scanf("%lf", &inches);
    height = inches + (feet * 12);
    printf("Your weight is %.2lf pounds\n", weight);
    printf("Your height is %.2lf inches\n", height);

    // Call caluclating function
    bmi = calculate_bmi(weight, height);
    
    // Output 
    printf("Your BMI is: %.2lf\n",bmi);
    if (bmi >= 18.50 &&  bmi <= 25.00){
        printf("You are within normal range.\n");
    }
    else if (bmi > 25.00 ){
        printf("You are above normal range. Please visit your physician.\n");
    }
    else if (bmi < 18.50){
        printf("You are below normal range. Please visit your physician.\n");
    }
    return 0;
}


double calculate_bmi(double weight, double height){
    return (weight / (height * height) * 703);
}
