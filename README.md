Universidade Federal do Tocantins - Campus Palmas
Aluna: Larissa Mitie Curi Hirai

# Atividade - 08
    - Slide com a apresentação sobre Teste de Software aqui. 
    - Descrição sobre o projeto desenvolvido.
## Projeto desenvolvido:
    - É um programa em C, que através do uso de funções, solicita o total gasto pelo cliente de uma loja,imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem). Sendo que as opções de pagamento são: 
        - Opção 1 : a vista com 10% de desconto
        - Opção 2 : em duas vezes (preço da etiqueta)
        - Opção 3 : de 3 até 10 vezes com 3% de juros ao mês (somente para compras
        acima de R$ 100,00).
## Testes propostos:
    - Teste de unidade
    - Teste de integração
    - Teste de usabilidade
    - Teste de Requisitos
    - Teste da caixa cinza
    - Teste de regreção (Não tem, pois só existe uma versão da aplicação)

## Resultado dos testes:
### Teste de unidade
    - Testa-se unidades menores de um software, de modo isolado, para ver se todas funcionam adequadamente. Ou seja, testar cada parte do software separdamente para ver a funcionalidade isolada.
##### Teste - 01
    - Entrada
        - 100
        - 1
    - Saída esperada
        - Entrou na função
        - Valor da variável (Valor) é: 10.00
        - alor da variável (total_f) é: 90.00
##### Teste - 02
    - Entrada
        - 100
        - 2
        - 50
        - 50
        - -1
    - Saída esperada
        - Primeira parte
            - Vai entrar dentro de uma estrutura de repetição
            - Continua dentro da estrutura de repetição
            - Valor da variável (soma_et) é: 50.00
            - Valor do vetor v[0] é: 50.00
            - Valor da variável (cont) é: 1
        - Segunda parte
            - Continua dentro da estrutura de repetição
            - Valor da variável (soma_et) é: 100.00
            - Valor do vetor v[1] é: 50.00
            - Valor da variável (cont) é: 2
        - Parte final
            - Valor do vetor n[0] é: 50.00
            - Valor do vetor n[1] é: 50.00
##### Teste - 03
    - Entrada
        - 500
        - 3
        - 5
    - Saída esperada
        - Valor da variável (soma_por) é: 1.03
        - Valor da variável (r_soma_por) é: 1.16
        - Valor da variável (mult_v) é: 579.64
        - Valor da variável (total_f) é: 579.64

### Teste de integração
    - Depois das unidades testadas, realiza-se uma verificação se elas funcionam juntas, integradas. Pode ocorrer delas apresentarem incompatibilidades ao funcionarem em conjunto, mesmo após terem sido aprovadas no teste de unidade.
#### Testes
##### Teste - 01
    - Entrada
        - 60
        - 1
    - Saída esperada
        - Valor total a ser pago é de: R$54.00
##### Teste - 02
    - Entrada
        - 600
        - 2
        - 350
        - 200
        - 50
        - -1
    - Saída esperada
        - Valor de cada parcela é de: R$300.00
        - Valor total a ser pago é de: R$600.00
##### Teste - 03
    - Entrada
        - 500
        - 3
        - 5
    - Saída esperada
        - Valor total a ser pago é de: R$579.64

### Teste de usabilidade
    - Teste das funções condicionais para entrada de certos dados ou ciclos de repetições que a condição de parada são dados específicos que devem ser informados pelo usuário.
#### Testes
##### Teste - 01
    - Entrada
        - 110
        - 1
    - Saída esperada
        - Opção 1 foi escolhida
        - Valor total a ser pago é de: R$99.00
##### Teste - 02
    - Entrada
        - 200
        - 2
        - 110
        - 40
        - 50
        - -1
    - Saída esperada
        - Opção 2 foi escolhida
        - Vai entrar dentro de uma estrutura de repetição
        - Continua dentro da estrutura de repetição
        - Saiu da estrutura de repetição
        - Valor de cada parcela é de: R$100.00
        - Valor total a ser pago é de: R$200.00
##### Teste - 03
    - Entrada
        - 150
        - 3
        - 5
    - Saída esperada
        - Opção 3 foi escolhida
        - Valor total a ser pago é de: R$556.94

### Teste de requisitos
    - Avalia-se se um grupo de entrada de dados resultou nas saídas pretendidas de acordo com que o usuário necessita e levando em consideração a especificação do programa. Ou seja, verifica se uma certa entrada resultou na saída esperada.
#### Testes
##### Teste - 01
    - Entrada
        - 98.50
        - 1
    - Saída esperada
        - Valor total a ser pago é de: R$88.65
##### Teste - 02
    - Entrada
        - 500
        - 2
        - 350
        - 150
        - 50
        - -1
    - Saída esperada
        - Valor de cada parcela é de: R$275.00
        - Valor total a ser pago é de: R$550.00
##### Teste - 03
    - Entrada
        - 800
        - 3
        - 7
    - Saída esperada
        - Valor total a ser pago é de: R$983,90

### Teste da caixa cinza
    - Avalia tanto os aspectos internos quanto os externos, de entrada e saída. Pode utilizar-se de engenharia reversa.
#### Testes
##### Teste - 01
    - Entrada
        - 98.50
        - 1
    - Saída esperada
        - O valor do desconpilador é R$98,50 e o valor inicaial é R$98,50
        - Valor total a ser pago é de: R$88.65
##### Teste - 02
    - Entrada
        - 100
        - 2
        - 50
        - 50
        - -1
    - Saída esperada
        - O valor obtido no descompilador é 100.00 e o valor real é 100.00
        - Valor de cada parcela é de: R$50.00
        - Valor total a ser pago é de: R$100.00
##### Teste - 03
    - Entrada
        - 150
        - 3
        - 5
    - Saída esperada
        - O valor obtido no descompilador é 150.00 e o valor real é 150.00
        - Valor total a ser pago é de: R$173.89
