#include<stdio.h>
int main()
{
  int h, i, j, k, l, m;
  do {
    scanf("%d", &h);
  }
  while(h < 0 || h > 23);

  for(i = 0; i < h; i++) {
    for(j = h - i; j > 1; j--) {
      printf(" ");
    }
    for(k = 0; k < i; k++) {
      printf("#");
    }
    printf("  ");
    for(k = 0; k < i; k++) {
      printf("#");
    }
    printf("\n");
  }
  }
