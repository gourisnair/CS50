#include<stdio.h>
int main()
{
  int i, j, size;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int a[size];
  printf("Enter array\n");
  for(i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

  int temp;
  for(i = 0; i < size; ++i) {
    for(j = i + 1; j < size; ++j) {
      if(a[i] > a[j]) {
      }
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }
  for(i = 0; i < size; i++) {
    printf("%d", a[i]);
  }
}
