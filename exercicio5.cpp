#include <iostream>
  
  int main(){
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);
    return 0;
  }