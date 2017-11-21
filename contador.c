#include<stdio.h>
#include<stdlib.h>
main(){
//se declaran las dos variables contadoras para numeros par e impares
int i,k,contadorpar =0,contadorimpar=0;
string st = "String sin usar";
printf("Introduzca numero a terminar");
scanf("%d",&k);
for(i=10;i<=k;i++)
{ if(i%2==0){
printf("%d: es par\n",i);
//cuando un numero sea par el contador de pares va sumar 1 a lo que ya tenia actualmente
contadorpar++;
}
else{
printf("%d: es impar\n",i);
//cuando un numero sea impar el contador de inpares va sumar 1 a lo que ya tenia actualmente
contadorimpar++;
}

}
//imprimimos en pantalla los resultados de ambos contadores
printf("%d: cantidad de numeros pares\n",contadorpar);
printf("%d: cantidad de numeros inpares\n",contadorimpar);
system("pause");
} 
