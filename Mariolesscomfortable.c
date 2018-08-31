#include<stdio.h>
int main()
{
  int h, i, j, k;
  scanf("%d", &h);
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
