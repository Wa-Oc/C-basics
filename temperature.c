//Author:Walter Ochieng 
//date:02/07/2024
//Descripction:function to convert temperature 
//Regeneration no:BBIT-05-0124/2016

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    float celsius, fahrenheit;

    // Prompt user for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = celsiusToFahrenheit(celsius);

    // Display result
    printf("%.2f Celsius is equivalent to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
