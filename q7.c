#include <stdio.h>
#include <stdlib.h>
int main(){

  int m, n,f;
  printf("Digite o valor de m: ");
  scanf("%i", &m);
  printf("Digite o valor de n: ");
  scanf("%i", &n);

  if(n == 1){
    m += 1;
    printf("\nM: %d\nN: %d",m,n);
  }
  else if(m == 1){
    n += 1;
    printf("\nM: %d\nN: %d",m,n);
  }
  else if (m > 1 && n > 1){
    f = (m - 1) + (n - 1);
    printf("\nM: %d\nN: %d",m,n);
        printf("\n%d = (%d-1) + (%d-1)",f,m,n);
  }
  
  return 0;
}
