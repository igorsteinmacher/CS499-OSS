#include <stdio.h>
#include <stdbool.h>

/*
The two functions, characteristic() and mantissa(), will break a character array into a characteristic and a mantissa. 
The characteristic for the number 2.351 is 2 and the mantissa is 351 over 1,000. 
The characteristic for the number 0.0125 is 0 and the mantissa is 125 over 10,000. 
The characteristic for the number -4.0 is -4 and the mantissa is 0 over 10. 
These values should be stored in the reference parameters c, numerator and denominator. 
The C string may include leading or trailing spaces, unary plus or minus signs, integers, or real numbers. 
Your functions must handle all of these cases. If an invalid string is passed in your function will return false. 
If the passed in string was valid return true.
*/
bool characteristic(char numString[], int& c);
bool mantissa(char numString[], int& numerator, int& denominator);
...
...
char number[] = "123.456";
int c, n, d;
 
//if the conversion from C string to integers can take place
if(characteristic(number, c) && mantissa(number, n, d))
{
    //do some math with c, n, and d
 printf("Character: %d\n", c);
 printf("Mantissa: %d\\%d\n", n, d);
}
else
{
    //handle the error on input
 printf("Float string error\n");
}

bool characteristic(char numString[], int& c) // leading digits before decimal if decimal exists
{
  int index = 0;
  *c = 0;
  int place=0;
  
  if(numString[0] != '/0')
  {
    while(numString[index] != '.' || numString[index] != '\0')
    {
      switch(numString[index])
      {
        case ('1'): // check for digits
          *c = c*(power(10, place)) + 1; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('2'):
          *c = c*(power(10, place)) + 2; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('3'):
          *c = c*(power(10, place)) + 3; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('4'):
          *c = c*(power(10, place)) + 4; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('5'):
          *c = c*(power(10, place)) + 5; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('6'):
          *c = c*(power(10, place)) + 6; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('7'):
          *c = c*(power(10, place)) + 7; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('8'):
          *c = c*(power(10, place)) + 8; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('9'):
          *c = c*(power(10, place)) + 9; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('0'):
          *c = c*(power(10, place)); // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
          charIndex++;
          break;
        case ('-'): // check for signs
          *c *= -1;
          break;
        case ('+'): // nothing needs to be done for positive
          break;
        case (' '): // whitespace
          break;
        default: // null
          break;
      }
      index++;
    }
    return true;
  }
  else
  {
    return false; // empty string
  }
}
bool mantissa(char numString[], int& numerator, int& denominator)
{
 int index;
 int denomPower = 1;
 
 if(numString[0] != '\0')
 {
  index = indexOf(numString, '.') + 1;
  while(numString[index] != '\0')
  {
   if(numString[index] != ' ')
   {
    *numerator = numerator * power(10, denomPower) + numberString[index]; // previous digit is moved to next place up (1's 10's 100's), new digit placed in 1's place
    denomPower++;
   }
   index++;
  }
  denominator = power(10, denomPower);
  return true;
 }
 else
 {
  return false;
 }
}
                  
int power(int base, int exponent)
{
  int index;
  if(exponent == 0)
  {
    base = 1;
  }
  for(index=2; index <= exponent; index++)
  {
    base *= base;
  }
  
  return base;
}

int indexOf(char string[], char search) // returns string index of desired character, returns -1 if not in string
{
 int index=0;
 while(string[index] != '\0')
 {
  if(string[index] == search)
  {
   return index;
  }
  index++;
 }
 return -1;
}
