#include <iostream>
#include "../leandrolib.h"

double toCelsius(double temperatura){
  return ((temperatura-32)*5)/9.0;
}

int main(int argc, const char *argv[]){
  double fahrenheit, celcius;
  
  fahrenheit = LerFloat("");
  celcius = toCelsius(fahrenheit);

  MostraFloat( "", celcius);

  return 0;
}
