#include <stdio.h>

void change(int a[], int i, int j){
  int temp;
  temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void quicksort(int a[], int left, int right)
{
    int i, j, pivot;
    
    if(left < right){
      pivot = a[left];
      i = left;
      j = right+1;

      do{
        do i++; while(pivot > a[i]);
        do j--; while(pivot < a[j]);
        if(i<j)
          change(a, i, j);
      }while(i<j);
        
      change(a, left, j);
      quicksort(a, left, j-1);
      quicksort(a, j+1, right);
    }
}

int binarySearch(int a[], int left, int right, int key)
{
  int mid = 0;

  while(left <= right){
    mid = (left + right) / 2;

    if(a[mid] == key)
      return 1;
    else if(a[mid] < key)
      left = mid + 1;
    else
      right = mid - 1;
  }

  return 0;
}

int main(void) {
  int n = 0;
  int a[100001];
  int m = 0;
  int key[100001];

  scanf("%d", &n);

  for(int i=1; i<=n; i++){
    scanf("%d", &a[i]);
  }
  quicksort(a, 1, n);

  scanf("%d", &m);

  for(int i=1; i<=m; i++)
    scanf("%d", &key[i]);

  for(int i=1; i<=m; i++){

    int result = binarySearch(a, 1, n, key[i]);

    printf("%d\n", result);
  }
}
