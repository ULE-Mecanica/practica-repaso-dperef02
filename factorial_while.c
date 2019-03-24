//Practica repaso-David Pérez Fernández-1ºMecánica.#include<stdio.h>
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
 int i=0;
 while(i<n1){ 
 res=res*(n1-i);
 i++;
}
 printf("Resultado=%d\n",res);
}
