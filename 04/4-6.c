#include <stdio.h>

int main(void){
  int i, j, k;
  double t, dt, x[2], xx[2], a, b, c, d;

  FILE *fp;
  fp=fopen("output_4-6.csv","w");

  dt=0.0001;
  a=2.0;
  b=3.0;
  c=1.0;
  d=2.0;

  t=0.0;
  x[0]=0.4;
  x[1]=0.4;
  fprintf(fp,"%f,%f,%f\n",t,x[0],x[1]);
  for(i=1; i<=100000;i++){
    t=dt*i;
    xx[0]=x[0]+dt*(a-b*x[1])*x[0];
    xx[1]=x[1]+dt*(c*x[0]-d)*x[1];
    x[0]=xx[0];
    x[1]=xx[1];

    if(i%100==0){
      fprintf(fp,"%f,%f,%f\n",t,x[0],x[1]);
    }
  }

  return 0;
}
