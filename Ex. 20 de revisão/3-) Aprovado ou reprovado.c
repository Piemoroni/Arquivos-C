//Biblioteca
#include <stdio.h>

// Iniciar o programa
int main (){
   
    //Declarar as variaveis, como float pois a nota pode possuir casas decimais
    float n1, n2, media;
   
    //Perguntar e ler as variaveis, usando %f para float
    printf ("Informe as notas:\n");
    scanf ("%f" "%f",&n1,&n2);
   
    //Saber a media
    media = (n1 + n2) / 2;
   
    // Conferir se esta aprovado, com condição, se a media for maior ou igual a 7 imprimira aprovado, se a media for menor que 7 imprimira reprovado
    if (media >= 7){ 
        printf ("Parabens, está aprovado!\n");
    }
    else{ 
        printf ("Está reprovado :( \n");
    }

//Fechar o programa
return 0;
}
