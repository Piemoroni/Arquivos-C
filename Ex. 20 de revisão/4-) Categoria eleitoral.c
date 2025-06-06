//Biblioteca
#include <stdio.h>

//Iniciar o programa
int main (){
   
    //Declarar as variaveis, como int pois so utilizara numero inteiro
    int idade;
   
    //Perguntar e ler a variavel
    printf ("Informe sua idade:\n");
    scanf ("%d",&idade);
   
    // Conferir se pode votar, com condição, menos de 15 imprimira que não pode votar, 16/17 e mais de 70 imprimira facultativo
    // Se não atender nenhum dos anteriores, imprimira que é obrigatorio
    if (idade <= 15){
        printf ("Você não vota!\n");
    }
    else if (idade <= 17 || idade > 70){ 
        printf ("O voto é facultativo! \n");
    }
    else{ 
        printf ("O voto é obrigatario! \n");
    }

//Fechar o programa
return 0;
}