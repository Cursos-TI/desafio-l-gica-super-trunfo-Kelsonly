#include <stdio.h>

int main (){ 
    
    // Declaração de Variáveis das duas cartas:

    char Estado[12], Estado2[12]; 
    int Numero, Numero2;
    unsigned int Populacao, Populacao2;
    char Cidade[1000], Cidade2[1000];
    float Area, Area2;
    float PIB , PIB2;
    int Turismo, Turismo2;
    float Densidadepopulacional, PIBpercapita;
    float Densidadepopulacional2, PIBpercapita2, Densidadepopulacionalinversa, Densidadepopulacionalinversa2;
    float Superpoder, Superpoder2;
    unsigned int Resultadonumerodehabitantes, Resultadoarea, ResultadoPIB, Resultadoturismo, Resultadopopulacao, Resultadodensidadepopulacional, ResultadoPIBpcapita, Resultadosuperpoder;
    int resultado1, resultado2;
    int atributo1, atributo2;
    //O "printf" é a função que indica o que será impresso e solicitado ao usuário. O "scanf é a função que lê a resposta do usuário".
    //Aqui podemos ver também os especificadores de formatos e os tipos de variáveis correspondentes.
    
    //Carta 1
    
    printf("Carta 1\n"); //Indica a ordem das cartas.
    //printf e scanf para solicitar e guardar os dados informados pelo usuário.

    printf("Digite uma letra de 'A' a 'H' representando um estado: \n"); 
    scanf("%s", &Estado); //O dado é guardado na variável informada.

    printf("Digite o número da carta: \n"); 
    scanf("%d", &Numero);

    printf("Digite o nome da Cidade: \n"); 
    scanf("%s", &Cidade);

    printf("Digite o numero de habitantes da Cidade: \n");
    scanf("%u", &Populacao);

    printf("Digite a área da Cidade em quilômetros quadrados: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo);


    //Carta 2
    
    printf("Carta 2 \n");

    printf("Digite uma letra de 'A' a 'H' representando um estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o número da carta: \n");
    scanf("%d", &Numero2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite o numero de habitantes da Cidade: \n");
    scanf("%u", &Populacao2);

    printf("Digite a area da Cidade em quilômetros quadrados: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo2);
    
    //Operação matemática para calcular a Densidade Ppopulacional e o PIB per Capita de cada carta:

    Densidadepopulacional = (float) Populacao/Area;  //Conversão explícita da População e da área de int para float no resultado.
    Densidadepopulacional2 = (float) Populacao2/Area2; 
    PIBpercapita = (float) PIB/Populacao;  //Conversão explícita da PIB e da área de int para float no resultado.
    PIBpercapita2 = (float) PIB2/Populacao2;
    
    Densidadepopulacionalinversa = 1 / Densidadepopulacional;//Calculando a densidade inversa para facilitar as somas posteriormente.
    Densidadepopulacionalinversa2 = 1 / Densidadepopulacional2;
    Superpoder  = (float) Populacao + Area + PIB + Turismo + Densidadepopulacionalinversa+ PIBpercapita; //A soma para os valores do Super poder.
    Superpoder2 = (float) Populacao2 + Area2 + PIB2 + Turismo2 + Densidadepopulacionalinversa2 + PIBpercapita2;

    

    //ESCOLHA DOIS ATRIBUTOS
    //COMPARAÇÃO COM MULTIPLOS ATRIBUTOS
    //SOMA DOS ATRIBUTOS
    //TRATAMENTO DE EMPATES
    //MENUS DINÂMICOS
    //DEMONSTRAÇÃO CLARA DOS RESULTADOS
    
    
    
    //Menu da primeira Carta(Aqui aparecerá na interface as opções de atributos e o pedido para que seja escolhido um atributo)
    printf("***ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAR:***\n");
    printf("1 . POPULAÇÃO\n");   //Opções que o usuário terá para comparar
    printf("2 . ÁREA\n");
    printf("3 . PIB\n");
    printf("4 . PONTOS TURÍSTICOS\n");
    printf("5 . DENSIDADE POPULACIONAL\n");
    printf("6 . PIB PER CAPITA\n");
    printf("7 . SUPER PODER\n");
    scanf( "%d", &atributo1); //Seleção da opção para Case(Aqui será escaneado e reservado a escolha do usuário na variável atributo1)

        switch (atributo1)//Switch para comparação do primeiro atributo escolhido
        {
        case 1 :
            printf("VOCÊ ESCOLHEU COMPARAR A POPULAÇÃO COMO PRIMEIRO ATRIBUTO!\n");//Informa ao usuário o primeiro atributo que foi escolhido por ele.
            resultado1 = (Populacao > Populacao2) ? 1 : 0;  //Linha de código para comparar o atributo "População", que só será executada caso seja escolhida a case 1.
            printf("Resultado da primeira compração: %d\n", resultado1); //Mostra o resultado da primeira comparação se 1 ou 0.
            
            if (resultado1 == 1){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade); //Este printf é para que a informação fique mais clara sobre qual carta venceu.
                printf("O NÚMERO DE PESSOAS NA CIDADE É DE: %u\n", Populacao);//Informando o nome da Cidade e o valor do atributo.
            } else if (resultado1 == 0){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade2);
                printf("O NÚMERO DE PESSOAS NA CIDADE É DE: %u\n", Populacao2);
            };
            break;
        
        case 2 :
            printf("VOCÊ ESCOLHEU COMPARAR A ÁREA COMO PRIMEIRO ATRIBUTO!\n");
            resultado1 = (Area > Area2) ? 1 : 0;//Linha de código para comparar o atributo "Área", que só será executada caso seja escolhida a case 2.
            printf("Resultado da primeira compração: %d\n", resultado1);
            if (resultado1 == 1){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade);
                printf("A ÁREA DA CIDADE É DE: %.2f\n", Area);
            } else if (resultado1 == 0){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade2);
                printf("A ÁREA DA CIDADE É DE: %.2f\n", Area2);
            }
            break;
        
        case 3 :
            printf("VOCÊ ESCOLHEU COMPARAR O PIB COMO PRIMEIRO ATRIBUTO!\n");
            resultado1 = (PIB > PIB2) ? 1 : 0;
            printf("Resultado da primeira compração: %d\n", resultado1);
            if (resultado1 == 1){
                printf("CIDADE %f VENCEU A PRIMEIRA RODADA!!\n", Cidade);
                printf("O VALOR DO PIB DA CIDADE É: %.2f\n", PIB);
            } else if (resultado1 == 0){
                printf("CIDADE %f VENCEU A PRIMEIRA RODADA!!\n", Cidade2);
                printf("O VALOR DO PIB DA CIDADE É: %.2f\n", PIB2);
            };
            break;

        case 4 :
            printf("VOCÊ ESCOLHEU COMPARAR O NÚMERO DE PONTOS TURÍSTICOS COMO PRIMEIRO ATRIBUTO!\n");
            resultado1 = (Turismo > Turismo2) ? 1 : 0;
            printf("Resultado da primeira compração: %d\n", resultado1);
            if (resultado1 == 1){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade);
                printf("NÚMERO DE PONTOS TURÍSTICOS DA CIDADE É: %d\n", Turismo);
            } else if (resultado1 == 0){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade2);
                printf("NÚMERO DE PONTOS TURÍSTICOS DA CIDADE É: %d\n", Turismo2);
            };
            break;
        
        case 5 :
            printf("VOCÊ ESCOLHEU COMPARAR A DENSIDADE POPULACIONAL COMO PRIMEIRO ATRIBUTO!\n");
            resultado1 = (Densidadepopulacional < Densidadepopulacional2) ? 1 : 0;
            printf("Resultado da primeira compração: %d\n", resultado1);
            if (resultado1 == 1){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade);
                printf("Densidade Populacional: %.2f\n", Densidadepopulacional);
            } else if (resultado1 == 0){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade2);
                printf("Densidade Populacional: %.2f\n", Densidadepopulacional2);
            }
            break;

        case 6 :
            printf("VOCÊ ESCOLHEU COMPARAR O PIB PER CAPITA COMO PRIMEIRO ATRIBUTO!\n");
            resultado1 = (PIBpercapita > PIBpercapita2) ? 1 : 0;
            printf("Resultado da primeira compração: %d\n", resultado1);
            if (resultado1 == 1){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade);
                printf("O PIB PER CAPITA DA CIDADE É DE: %.2f\n",PIBpercapita);
            } else if (resultado1 == 0){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade2);
                printf("O PIB PER CAPITA DA CIDADE É DE: %.2f\n",PIBpercapita2);
            };
            break;
        
        case 7 :
            printf("VOCÊ ESCOLHEU COMPARAR O SUPER PODER COMO PRIMEIRO ATRIBUTO!\n");
            resultado1 = (Superpoder > Superpoder2) ? 1 : 0;
            printf("Resultado da primeira compração: %d\n", resultado1);
            if (resultado1 == 1) {
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade);
                printf("O SUPER PODER DA CIDADE É DE: %.2f\n", Superpoder);
            } else if (resultado1 == 0){
                printf("CIDADE %s VENCEU A PRIMEIRA RODADA!!\n", Cidade2);
                printf("O SUPER PODER DA CIDADE É DE: %.2f\n", Superpoder2);
            };
            break;
                
        default:
            printf("Opção Inválida!\n");//Caso seja dgitado um valor diferente das opções.
            break;
        }

    // Menu da Segunda carta (Para que o usuário escolha qual o segundo atributo que gostaria de comparar)
    printf("***ESCOLHA UM SEGUNDO ATRIBUTO PARA COMPARAR:***\n");
    printf("1 . POPULAÇÃO\n");  
    printf("2 . ÁREA\n");
    printf("3 . PIB\n");
    printf("4 . PONTOS TURÍSTICOS\n");
    printf("5 . DENSIDADE POPULACIONAL\n");
    printf("6 . PIB PER CAPITA\n");
    printf("7 . SUPER PODER\n");
    scanf( "%d", &atributo2); //Seleção da opção para Case.

    if(atributo1 == atributo2){ //Linha de código necessária para que não seja escolhida o mesmo atributo que a primeira.
        printf("Você escolheu o mesmo atributo!\n");
    } else {

        switch (atributo2)//Switch para comparação do segundo atributo escolhido
        {
       case 1 :
            printf("VOCÊ ESCOLHEU COMPARAR A POPULAÇÃO COMO SEGUNDO ATRIBUTO!\n");
            resultado2 = (Populacao > Populacao2) ? 1 : 0 ;
            printf("Resultado da segunda compração: %d\n", resultado2);
            if (resultado2 == 1){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade);
                printf("O NÚMERO DE PESSOAS NA CIDADE É DE: %u\n", Populacao);
            } else if (resultado2 == 0){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade2);
                printf("O NÚMERO DE PESSOAS NA CIDADE É DE: %u\n", Populacao2);
            } 
            break;
        
        case 2 :
            printf("VOCÊ ESCOLHEU COMPARAR A ÁREA COMO SEGUNDO ATRIBUTO!\n");
            resultado2 = (Area > Area2) ? 1 : 0 ;
            printf("Resultado da segunda compração: %d\n", resultado2);//ATÉ AQUI FUNCIONOU!!!
            if (resultado2 == 1){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!n", Cidade);
                printf("A ÁREA DA CIDADE É DE: %.2f\n", Area);
            } else if (resultado2 == 0){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade2);
                printf("A ÁREA DA CIDADE É DE: %.2f\n", Area2);
            }
            break;
        
        case 3 :
            printf("VOCÊ ESCOLHEU COMPARAR O PIB COMO SEGUNDO ATRIBUTO!\n");
            resultado2 = (PIB > PIB2) ? 1 : 0 ;
            printf("Resultado da segunda compração: %d\n", resultado2);
            if (resultado2 == 1){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade);
                printf("O VALOR DO PIB DA CIDADE É: %.2f\n", PIB);
            } else if (resultado2 == 0){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade2);
                printf("O VALOR DO PIB DA CIDADE É: %.2f\n", PIB2);
            }
            break;

        case 4 :
            printf("VOCÊ ESCOLHEU COMPARAR O NÚMERO DE PONTOS TURÍSTICOS COMO SEGUNDO ATRIBUTO!\n");
            resultado2 = (Turismo > Turismo2) ? 1 : 0 ;
            printf("Resultado da segunda compração: %d\n", resultado2);
            if (resultado2 == 1){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade);
                printf("NÚMERO DE PONTOS TURÍSTICOS DA CIDADE É: %d\n", Turismo);
            } else if (resultado2 == 0){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade2);
                printf("NÚMERO DE PONTOS TURÍSTICOS DA CIDADE É: %d\n", Turismo2);
            }
            break;
        
        case 5 :
            printf("VOCÊ ESCOLHEU COMPARAR A DENSIDADE POPULACIONAL COMO SEGUNDO ATRIBUTO!\n");
            resultado2 = (Densidadepopulacional < Densidadepopulacional2) ? 1 : 0 ;
            printf("Resultado da segunda compração: %d\n", resultado2);
            if (resultado2 == 1){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade);
                printf("Densidade Populacional: %.2f\n", Densidadepopulacional);
            } else if (resultado2 == 0){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade2);
                printf("Densidade Populacional: %.2f\n", Densidadepopulacional2);
            }
            break;

        case 6 :
            printf("VOCÊ ESCOLHEU COMPARAR O PIB PER CAPITA COMO SEGUNDO ATRIBUTO!\n");
            resultado2 = (PIBpercapita > PIBpercapita2) ? 1 : 0 ;
            printf("Resultado da segunda compração: %d\n", resultado2);
            if (resultado2 == 1){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade);
                printf("O PIB PER CAPITA DA CIDADE É DE: %.2f\n",PIBpercapita);
            } else if (resultado2 == 0){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade2);
                printf("O PIB PER CAPITA DA CIDADE É DE: %.2f\n",PIBpercapita2);
            }
            break;
        
        case 7 :
            printf("VOCÊ ESCOLHEU COMPARAR O SUPER PODER COMO SEGUNDO ATRIBUTO !\n");
            resultado2 = (Superpoder > Superpoder2) ? 1 : 0 ;
            printf("Resultado da segunda compração: %d\n", resultado2);
            if (resultado2 == 1){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade);
                printf("O SUPER PODER DA CIDADE É DE: %.2f\n", Superpoder);
            } else if (resultado2 == 0){
                printf("CIDADE %s VENCEU A SEGUNDA RODADA!!\n", Cidade2);
                printf("O SUPER PODER DA CIDADE É DE: %.2f\n", Superpoder2);
            }
            break;
        default:
            printf("Opção Inválida!\n");//Caso seja dgitado um valor diferente das opções.
            break;
        }
        }
    //RESULTADO DA COMPARAÇÃO ENTRE AS DUAS CARTAS. Para separar as informações acima do resultado final.
    printf("*************************************************************\n");
    printf("***********************RESULTADO FINAL**********************\n");
    printf("Resultado da primeira comparação de atributos: %d \n", resultado1);//Printf para demonstrar o resultado da primeira comparação.
    printf("Resultado da segunda comparação de atributos: %d \n", resultado2);//Printf para demonstrar o resultado da segunda comparação.
    
    if(resultado1 && resultado2){ //Se resultado 1 e 2 forem verdadeiros, isso indica que a carta 1 venceu as duas rodadas.
    printf("CIDADE DE %s , CARTA %s%d VENCEU!!\n", Cidade, Estado, Numero);//Informa a cidade e o código da carta vencedora, caso ela seja a primeira carta.
    } else if (resultado1 != resultado2){//Se resultado 1 e 2 forem diferentes isso significa que um é verdadeiro e outro é falso nas duas rodadas.
    printf("CARTAS 1 e 2 EMPATARAM!\n ");//Informa se houve empate( 1 e 0 ou 0 e 1).
    } else { //Se o resutado não é verdadeiro, verdadeiro, nem falso e verdadeiro ou verdadeiro e falso, quer dizer que é falso, falso que significa que a carta 2 venceu.
    printf("CIDADE DE %s , CARTA %s%d VENCEU!!\n", Cidade2, Estado2, Numero2);//Informa a cidade e o código da carta vencedora, caso ela seja a segunda carta.
    
    }



}



