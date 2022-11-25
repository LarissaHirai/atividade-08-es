#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 800

void descompila_op1 (float total_f, float valor, float valor_ini){
    float result, soma;
    result= total_f + valor;
    printf("\nO valor do descompilador é %.2f e o valor inicial é %.2f", result, valor_ini);
}

float calcula_desconto(float total_g, float por_100){
    float total_f, valor;
    //printf("\nEntrou na função");
    valor = total_g * por_100;
    //printf("\nValor da variável (Valor) é: %.2f", valor);
    total_f = total_g - valor;
    //printf("\nValor da variável (total_f) é: %.2f", total_f);
    //descompila_op1(total_f, valor, total_g);
    return total_f;
}

void descompila_op2(int cont, float n[], float valor_real){
    float soma;
    for(int i=0; i<cont; i++){
        soma = soma + n[i];
    }
    printf("\nO valor obtido no descompilador é %.2f e o valor real é %.2f", soma, valor_real);
}

void descompilador_op3(float total_f, float r_soma_por, float total_g){
    float result;
    result = total_f / r_soma_por;
    printf("\nO valor obtido no descompilador é %.2f e o valor real é %.2f", result, total_g);
}

int main()
{
    int quant_mes, op1;
    float total_g, total_p, soma_por, r_soma_por, mult_v, total_f, preco_et, soma_et,
    total_p_et;
    total_f = 0;
    soma_por = 0;
    r_soma_por = 0;
    mult_v = 0;
    total_f = 0;
    printf("\nQual foi o total gasto pelo cliente?\n");
    scanf("%f", &total_g);
    //printf("\n%.2f", total_g);
    printf("\nSelecione uma opção de pagamento:");
    printf("\n Opção 1 : a vista com 10%% de desconto");
    printf("\n Opção 2 : em duas vezes (preço da etiqueta)");
    printf("\n Opção 3 : de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00).");
    printf("\n");
    scanf("%d", &op1);
    //printf("\n%d", op1);
    if(op1 == 1){
        //printf("\nOpção 1 foi escolhida");
        total_f = calcula_desconto(total_g, 0.1);
        printf("\nValor total a ser pago é de: R$%.2f", total_f);
    }else{
        if(op1 == 2){
            //printf("\nOpção 2 foi escolhida");
            printf("\nQual é o preço da etiqueta?");
            printf("\n");
            scanf("%f", &preco_et);
            soma_et = 0;
            int cont = 0;
            float v[MAX];
            //printf("\nVai entrar dentro de uma estrutura de repetição");
            do{
                //printf("\nContinua dentro da estrutura de repetição");
                soma_et = soma_et + preco_et;
               // printf("\nValor da variável (soma_et) é: %.2f", soma_et);
                v[cont] = preco_et;
                //printf("\nValor do vetor v[%d] é: %.2f", cont, v[cont]);
                cont++;
                //printf("\nValor da variável (cont) é: %d", cont);
                printf("\nQual é o preço da etiqueta? (-1) - Sair");
                printf("\n");
                scanf("%f", &preco_et);
            }while(preco_et != -1);
            float n[cont];
            for(int i=0; i<cont; i++){
                n[i] = v[i];
                //printf("\nValor do vetor n[%d] é: %.2f", i, n[i]);

            }
            //descompila_op2(cont, n, soma_et);
            //printf("\nSaiu da estrutura de repetição");
            printf("\nValor de cada parcela é de: R$%.2f", soma_et / 2);
            printf("\nValor total a ser pago é de: R$%.2f", soma_et);
        }else{
            if((op1 == 3) && (total_g > 100)){
                //printf("\nOpção 3 foi escolhida");
                printf("\nEm quantos meses deseja parcelar? (Mínimo 3 meses e maximo 10 meses)");
                printf("\n");
                scanf("%d", &quant_mes);
                soma_por = 1 + 0.03;
                //printf("\nValor da variável (soma_por) é: %.2f", soma_por);
                r_soma_por = pow(soma_por, quant_mes);
                //printf("\nValor da variável (r_soma_por) é: %.2f", r_soma_por);
                mult_v = total_g * r_soma_por;
                //printf("\nValor da variável (mult_v) é: %.2f", mult_v);
                total_f = mult_v;
                //printf("\nValor da variável (total_f) é: %.2f", total_f);
                //printf("%.2f", r_soma_por);
                //descompilador_op3(total_f, r_soma_por, total_g);
                printf("\nValor total a ser pago é de: R$%.2f", total_f);
            }else{
                printf("Opção invalida ou valor abaixo do minino para a opção. Por favor tente novamnte!");
            }
        }
    }
}