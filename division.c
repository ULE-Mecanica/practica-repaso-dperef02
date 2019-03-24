//Practica repaso-David Pérez Fernández-1ºMecánica.
#include<stdio.h>
int division(int n1, int n2);
int main(){
 int a,b,res;
 printf("Introduzca un numero:");
 scanf("%d",&a);
 printf("Introduzca el numero por el que quiere dividir el primero:");
 scanf("%d",&b);
 res=division(a,b);
 printf("El resultado es: %d/%d=%d\n",a,b,res);
 return 0;
}
int division(int n1, int n2){
 int i=1;
 while(n1>n2){
  n1=(n1-n2);
  i++;
}
return i;
}
