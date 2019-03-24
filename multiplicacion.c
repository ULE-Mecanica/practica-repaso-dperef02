//Practica repaso-David Pérez Fernández-1ºMecánica.
#include<stdio.h>
int mult(int n1, int n2);
int main(){
 int a,b,res,j=0;
 printf("Introduzca un numero:");
 scanf("%d",&a);
 printf("Introduzca el numero por el que quiere multiplicar el primero:");
 scanf("%d",&b);
 res=mult(a,b);
 printf("El resultado es: %d*%d=",a,b);
 while(j<b){
  j++;
  if(j<b){
   printf("%d+",a);
}
  else{
   printf("%d",a);
}
}
 printf("=%d\n",res);
 return 0;
}
int mult(int n1, int n2){
 int i,sol=0;
 for(i=0;i<n2;i++){
 sol=sol+n1;
}
 return (sol);
}
