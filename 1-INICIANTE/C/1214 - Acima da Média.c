#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int a,b,c,d=0,e=0,l;
  scanf("%i",&l);
for(int f=0;f<l;f++){
scanf("%i",&a);

int vet[a];

for (int i=0;i<a;i++){
 scanf("%i",&b);
  vet[i]=b;
b=0;
}
for (int j=0;j<a;j++){
    d+=vet[j];

}
d= d/a;
    for(int k=0;k<a;k++){
   if (vet[k]>d)
  e++;
}

float n=1.0;
n= n*1.0;
n= e;

printf ("%.3f%%\n",n/a*100);

for(int h =0;h<a;h++)
vet[h]=0;
d=0;
n=0;
e=0;

}

}