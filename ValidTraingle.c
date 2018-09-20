#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool validTriangle (float a, float b, float c);
int main()
{
  float a, b, c;
  do {
    scanf("%f%f%f", &a, &b, &c);
  }
  while(a <= 0 && b <= 0 && c <= 0);
  printf("%i",validTriangle(a, b, c));
}

bool validTriangle (float a, float b, float c) {
  if((a + b) >= c && (b + c) >= a && (c + a) >= b) {
    return true;
  } else return false;
}
