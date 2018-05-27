#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void){
  int i,j;
  double S, SS, I, II, R,RR,b,r,dt,t,x1,x2,N,c,d,e,f,be,rf;
  srand(time(NULL));
  N=1;

  FILE *fp;
  fp=fopen("output_6-8.csv","w");

  c=0;
  d=0;

  for(j=0; j<10000; j++){
    x1=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    x2=(((double)rand()+1)/((double)RAND_MAX)+1)*N;
    b=sqrt(-2*log(x1))*cos(2*M_PI*x2);
    r=sqrt(-2*log(x1))*sin(2*M_PI*x2);

    c=c+b;
    d=d+r;

    e=c/10000;
    f=d/10000;

  }

  dt=0.001;

  t=0.0;
  S=100;
  R=30;
  I=20;

  for(i=0; i<10000; i++){
    x1=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    x2=(((double)rand()+1)/((double)RAND_MAX)+1)*N;
    be=sqrt(-2*log(x1))*cos(2*M_PI*x2)-e;
    rf=sqrt(-2*log(x1))*sin(2*M_PI*x2)-f;

    t=dt*i;
    SS=S+dt*(-be*S*I);
    RR=I+dt*(rf*I);
    II=R+dt*(be*S*I-rf*I);
    S=SS;
    R=RR;
    I=II;

    if(i%100==0){
      fprintf(fp,"%f,%f,%f,%f\n",t,S,I,R);
    }
  }

fclose(fp);

  return 0;
}
