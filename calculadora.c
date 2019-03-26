#include <stdio.h>


//Exercício:
/*
1. O menu deve deixar o usuário encerrar a aplicação com a opção zero. Quando isso ocorrer, você exibe até logo.
2. Na hora da obtenção do operando, deve ser exibido se ele é o primeiro ou o segundo operando.
3. O resultado deverá ser exibido da seguinte forma: %d op %d = %d\n
*/

void calculadora (){
    while (1){
        exibe_menu();
        int op = obtem_opcao();
        if (valida_opcao(op)){
            exibe_texto_obtencao_operando();
            int a = obtem_operando ();
            exibe_texto_obtencao_operando();
            int b = obtem_operando ();
            int res;
            switch (op){
                case 1:
                    res = soma(a, b);
                    break;
                case 2:
                    res = sub(a, b);
                    break;
                case 3:
                    res = mult(a, b);
                    break;
                case 4:
                    res = div(a, b);
                    break;
            }
            exibe_resultado(res);
        }
    }
}

void exibe_texto_obtencao_operando(){
    printf ("Digite operando\n");
}
int obtem_operando (){
    int a;
    scanf ("%d", &a);
    return a;
}
void exibe_resultado (int resultado){
    printf ("%d\n", resultado);
}

int valida_opcao (int op){
    return op > 0 && op < 5;
}

int obtem_opcao (){
    int a;
    scanf ("%d", &a);
    return a;
}

void exibe_menu (){
    printf ("1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
}

int div (int a, int b){
    return a / b;
}

int mult (int a, int b){
    return a * b;
}
int sub (int a, int b){
    return a - b;
}
int soma (int a, int b){
    return a + b;
}
int main (){
    calculadora();
    return 0;
}
