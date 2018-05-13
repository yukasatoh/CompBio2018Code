#include <stdio.h>

int main(void){
  int i;
  double t, dt, x[2], xx[2], a, b, c, d, e, f;

  FILE *fp;
  fp=fopen("output_4-9.csv","w");

  dt=0.0001;
  a=2.0;
  b=2.0;
  c=3.0;
  d=3.0;
  e=1.0;
  f=2.0;

  t=0.0;
  x[0]=0.4;
  x[1]=0.4;
  fprintf(fp,"%f,%f,%f\n",t,x[0],x[1]);
  for(i=1; i<=100000;i++){
    t=dt*i;
    xx[0]=x[0]+dt*(a-b*x[0]-c*x[1])*x[0];
    xx[1]=x[1]+dt*(d-e*x[0]-f*x[1])*x[1];
    x[0]=xx[0];
    x[1]=xx[1];

    if(i%100==0){
      fprintf(fp,"%f,%f,%f\n",t,x[0],x[1]);
    }
  }

  return 0;
}
