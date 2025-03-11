#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    float peso, altura, acorreta;
    printf ("Informe seu peso atual:\n");
    scanf ("%f",&peso);
    printf ("Informe sua altura atual:\n");
    scanf ("%f",&altura);
    acorreta = altura * altura;
    if ( peso / acorreta < 18.5 )
    {
        printf ("Você está abaixo do peso");
    }
    else if ( peso / acorreta < 24.9)
    {
        printf ("Você está no peso ideal");
    }
    else if ( peso / acorreta < 29.9)
    {
        printf ("Você está com sobrepeso");
    }
    else{
        printf ("Você está em obesidade");
    }
    return 0;
}