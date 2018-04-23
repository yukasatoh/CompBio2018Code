#include <stdio.h>

int main(void){
  int i;
  for(i=0; i<10; i++){
    printf("%d: ",i);
    if(1>5){
      printf("iは５より大きい,");
    }
    if(i==3){
      printf("iは３と等しい,");
    }
    if((i>=3)&&(i<=6)){
      printf("iは３以上６以下,");
    }
    if(!(i==1||i==2)){
      printf("iは１または２ではない,");
    }
    printf("\n");
  }
  return 0;
}
