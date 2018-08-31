#include<stdio.h>
int main()
{
  int h, i, j, k;
  do {
    scanf("%d", &h);
  }
  while(h < 0 || h > 23);
  for(i = 2; i <= h + 1; i++) {
    for(k = h - i; k >= 0; k--) {
      printf(" ");
      }
      for(j = i; j > 0; j--) {
        printf("#");
      }
      printf("\n");
  }
}
