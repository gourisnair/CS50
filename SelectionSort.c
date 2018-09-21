#include<stdio.h>
int main()
{
  int i, j, size, min;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int a[size];
  printf("Enter array\n");
  for(i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

  int temp;
  for(i = 0; i < size - 1; i++) {
    min  = i;
    for(j = i + 1; j < size; j++) {
      if(a[min] > a[j]) {
        min = j;
      }
      if(min != i) {
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
      }
    }
  }
  for(i = 0; i < size; i++) {
    printf("%d", a[i]);
  }
}
