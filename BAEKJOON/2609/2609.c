#include <stdio.h>

int GCM(int a, int b);
int LCM(int a, int b);

int main(void) {
  int a=0, b=0;
  int G=0, L=0;
  
  scanf("%d %d", &a, &b);

  G = GCM(a, b);
  L = LCM(a, b);

  printf("%d\n%d\n", G, L);

  return 0;
}

int GCM(int a, int b)
{
  int result=1;
  int finish = (a>b) ? b/2 : a/2;

  if(a == b)
    return a;

  for(int i=1; i<=finish; i++){
    if(a%i==0 && b%i==0)
      result = i;
  }

  return result;
}
int LCM(int a, int b)
{
  int i=1, j=1;
  int result = 1;

  while(1){
    if(a*i > b*j)
      j++;
    else if(a*i < b*j)
      i++;
    else{
      result = a*i;
      break;
    }
  }

  return result;
}
