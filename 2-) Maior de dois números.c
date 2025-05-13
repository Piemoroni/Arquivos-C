//Biblioteca
#include <stdio.h>

//Iniciar o programa
int main (){
   
    //Declarar as variavei, int pois só utilizara numeros inteiros
    int n1, n2;
   
    //Perguntar e ler as variaveis
    printf ("Informe os numeros:\n");
    scanf ("%d" "%d",&n1,&n2);
   
    //Conferir qual numero é maior, com condição, se n1 for maior imprimira o n1, se n2 for maior, imprimira o n2
    if (n1>n2){ 
        printf ("O número maior é: %d !\n",n1);
    }
    else{ 
        printf ("O número maior é: %d !\n",n2);
    }

//Fechar o programa
return 0;
}
