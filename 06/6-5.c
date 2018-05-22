#include <stdio.h>

int main(void){
  int i;
  double S, SS, I, II, R,RR,b,r,dt,t;

  FILE *fp;
  fp=fopen("output_6-5.csv","w");

  dt=0.001;

  t=0.0;
  S=100;
  R=30;
  I=20;
  b=0.002;
  r=0.10;

  fprintf(fp,"%f,%f,%f,%f\n",t,S,I,R);
  for(i=1; i<=10000; i++){
    t=dt*i;
    SS=S+dt*(-b*S*I);
    RR=I+dt*(r*I);
    II=R+dt*(b*S*I-r*I);
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
