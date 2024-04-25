#include <stdio.h>
int main(){
int primeira_lista[5], segunda_lista[5],j, k=0,i, maior=0, menor=9999;
printf("Digite 5 numeros: \n");
for(i=1;i<=5;i++){
    scanf("%i", &primeira_lista[i]);
}
for(i=1;i<=5;i++){
    if(primeira_lista[i]%2==0){
        k++;
    }
    if(primeira_lista[i]> maior){
        maior= primeira_lista[i];
    }
    if(primeira_lista[i]<menor){
        menor=primeira_lista[i];
    }
}
for(i=1;i<=5;i++){
    segunda_lista[i]= primeira_lista[i]*k;

}
printf("quant pares: %i\n", k);
printf("Maior: %i\n", maior);
printf("Menor: %i\n",menor);
printf("Novo vetor: \n");
for(i=1;i<=5;i++){
    printf("%i\n", segunda_lista[i]);
}


}
