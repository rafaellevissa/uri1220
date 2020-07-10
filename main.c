#include <stdio.h>
#include <math.h>
int main(void) {
  int quantidade,i;
  double valores[100],media, soma, acumulado;
  scanf("%d",&quantidade);    
  
  while(quantidade>0){
    soma=0;
    for(i=0;i<quantidade;i++){
      scanf("%lf",&valores[i]);
      soma+=valores[i];
    }
    media=soma/quantidade;
    acumulado=0;
    for(i=0;i<quantidade;i++){
      if(valores[i]>media){
        acumulado+=round(valores[i]-media);
      }
    }
    printf("$%.2lf\n",acumulado);
    scanf("%d",&quantidade);
  }

  return 0;
}