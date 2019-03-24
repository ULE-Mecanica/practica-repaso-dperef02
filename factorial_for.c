//Practica repaso-David Pérez Fernández-1ºMecánica.
#include<stdio.h>
int fact(int n1);
int main(){
 int a,sol;
 printf("Introduzca un numero:\n");
 scanf("%d",&a);
 sol=fact(a);
 return 0;
}
int fact(int n1){
 int res=1;
 for(int i=0;i<n1;i++){
  res=res*(n1-i);
}
 printf("Resultado=%d\n",res);
}
