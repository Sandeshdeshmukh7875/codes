#include <stdio.h>

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0/9.0;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}

int main() {
    double temperature;
    char choice;

    printf("Enter the temperature value: ");
    scanf("%lf", &temperature);

    printf("Choose the conversion:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter 1 or 2: ");
    scanf(" %c", &choice);

    
  if (choice == '1') {
        double celsius = fahrenheitToCelsius(temperature);
        printf("%.2lf degrees Fahrenheit is equal to %.2lf degrees Celsius.\n", temperature, celsius);
    } else if (choice == '2') {
        double fahrenheit = celsiusToFahrenheit(temperature);
        printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit.\n", temperature, fahrenheit);
    } else {
        printf("Invalid choice. Please enter 1 or 2 for the conversion.\n");
        return 1; 
    }

    return 0;