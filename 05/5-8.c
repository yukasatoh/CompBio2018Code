# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void){
  int r,M,N,x,i,k,a;
  srand(time(NULL));
  M=1;
  N=6;
  a=0;

for(k=1; k<1001; k++){
    x=0;
  for(i=0; i<100; i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
      a=a+i;
      break;
    }
  }
  
  if (k==1){
    printf("%d\n",a/1);
  }

  else if(k==5){
    printf("%d\n",a/5);
  }

  else if(k==10){
    printf("%d\n",a/10);
  }

  else if(k==100){
    printf("%d\n",a/100);
  }

  else if(k==1000){
    printf("%d\n",a/1000);
  }
}

return 0;
}
