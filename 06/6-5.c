#include <stdio.h>

int main(void){
  int S, SS, I, II, R,RR,i;
  double b,r,dt,t;

  FILE *fp;
  fp=fopen("output_6-5.csv","w");

  dt=0.001;

  t=0.0;
  S=100;
  R=30;
  I=20;
  b=3.00;
  r=2.00;

  fprintf(fp,"%f,%d,%d,%d\n",t,S,I,R);
  for(i=1; i<=1000;i++){
    t=dt*i;
    SS=S+dt*(-b*S*I);
    RR=R+dt*(b*S*I-r*I);
    II=I+dt*(r*I);
    S=SS;
    R=RR;
    I=II;

    if(i%100==0){
      fprintf(fp,"%f,%d,%d,%d\n",t,S,I,R);
    }
  }

fclose(fp);

  return 0;
}
