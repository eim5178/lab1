// Evelyn Moore eim5178@psu.edu
// Collaborators:
// Caleb Frantz cmf6208@psu.edu
// Jared Cole jcc6066@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *celsius = (readline("Enter temperature in celsius: " ));
  double temp = atof(celsius);
  double fahrenheit_temp;
  fahrenheit_temp = (temp * 9/5) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, fahrenheit_temp);
}