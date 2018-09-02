#include<stdio.h>
int main()
{
  int change, count = 0;
  do{
    scanf("%d", &change);
  }
  while(change < 0);

  while(change >= 25 && change > 0) {
    change -= 25;
    count++;
  }
   while(change >= 10 && change > 0) {
     change -= 10;
     count++;
   }
   while(change >= 5 && change > 0) {
     change -= 5;
     count++;
   }
   while(change >= 1 && change > 0) {
     change -= 1;
     count++;
   }

  printf("%d", count);
}
