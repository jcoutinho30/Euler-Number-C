#include <stdio.h>

//Função que calcula o fatorial dos números
int fatorial (int n)
{
    int fat;

    for (fat = 1; n > 1; n--)
    fat = fat * n;
    
    return fat;
}

int main (){

    //Inicializando a variável contadora, dos termos e a que receberá o valor final do programa.
    //Recebendo a entrada do usuário quanto ao número de Termos de "e".
    int i, termos;
    double e = 0;
    scanf("%d", &termos);

    //Caso fixo/inicial em que há apenas 1 termo.
    if(termos == 1)
        printf("e=1.000000000000\n");

    //Caso para os quais o usuário desejar mais de 1 termo.
    else
    {
        for (i = 1; i <= termos - 1; i++){
            e = e + (double) 1 / ( fatorial (i) ) ;
    } 
        printf("e=%.12lf\n", e + 1);
    }
return 0;
}