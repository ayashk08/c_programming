// Fahrenheit to Celsius 
#include <stdio.h>  
float fahrenheit_celsious(float f) 
{ 
	return ((f - 32.0) * 5.0 / 9.0); 
} 
int main() 
{ 
	float f = 10; 
	printf("Temperature in Degree Celsius : %0.2f",fahrenheit_celsious(f)); 
	return 0; 
}

