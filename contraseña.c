//Practica repaso-David Pérez Fernández-1ºMecánica.
#include<stdio.h>
int main(){
 int a,c=0;
 do{
 printf("Introduzca la contraseña:\n");
 scanf("%d",&a);
 if(a>4567){
  printf("La clave correcta es menor\n");
}
 else{
  printf("La clave correcta es mayor\n");
}
 c++;
} 
 while(a!=4567 && c<3);
  if(a==4567){
   printf("La clave es correcta\n");
}
  else{
   printf("Has superado el numero de fallos\n");
}
return 0;
}
