#include <stdio.h>
#include <string.h> // Adiciona suporte para o fgets

int main() {
    int varPopulação_01 = 0, varPopulação_02 = 0, varPontosTuristivos_01 = 0, varPontosTuristivos_02 = 0;
    float varPIB_01 = 0, varPIB_02 = 0, varÁrea_01 = 0, varÁrea_02 = 0;
    char varCidade_01[50] = {'\0'}, varCidade_02[50] = {'\0'}, varEstado_01 = '\0', varEstado_02 = '\0'; //Uma array necessita de um conjunto nulos para ser vazio

    printf("Para começar a jogar, é necessário cadastrar as cartas com informações sobre as cidades. Você irá cadastrar duas cartas separadamente. Primeiro, vamos cadastrar todos os dados da primeira carta, depois os da segunda.\n Vamos começar! \n\nCadastro da Primeira Carta");
    
    printf("\nInforme uma única letra que representará o estado da cidade (exemplo: B para Bahia):\n");
    scanf(" %c", &varEstado_01); //O espaço antes de %c evita problemas com '\n'

    getchar(); // Consome o '\n' do scanf
    printf("\nInforme o nome completo da cidade selecionada:\n");
    fgets(varCidade_01, sizeof(varCidade_01), stdin); // Garantindo que o nome da cidade não ultrapasse o buffer
    varCidade_01[strcspn(varCidade_01, "\n")] = '\0'; // Remove '\n'
    
    printf("\nInforme a população da cidade (número total de habitantes):\n");
    scanf("%d", &varPopulação_01);

    printf("\nInforme a área da cidade em km²:\n");
    scanf("%f", &varÁrea_01);

    getchar(); // Consome o '\n' do scanf após a entrada de float
    printf("\nInforme o Produto Interno Bruto (PIB) da cidade em bilhões:\n");
    scanf("%f", &varPIB_01);

    getchar(); // Consome o '\n' do scanf após a entrada de float
    printf("\nInforme o número de pontos turísticos da cidade:\n");
    scanf("%d", &varPontosTuristivos_01);

    printf("Chegou a vez de cadastrar os dados da segunda carta. A estrutura é a mesma da primeira.\nVamos lá?\n\nCadastro da Segunda Carta");

    printf("\nEscolha uma letra única que representará o estado da cidade (exemplo: N para Rio Grande do Norte):\n");
    scanf(" %c", &varEstado_02);

    getchar(); // Consome o '\n' do scanf
    printf("\nDigite o nome completo da cidade que você escolheu:\n");
    fgets(varCidade_02, sizeof(varCidade_02), stdin); // Garantindo que o nome da cidade não ultrapasse o buffer
    varCidade_02[strcspn(varCidade_02, "\n")] = '\0'; // Remove '\n'
    
    printf("\nQual é a população total dessa cidade? Informe o número de habitantes:\n");
    scanf("%d", &varPopulação_02);

    printf("\nQuantos km² a cidade ocupa? Informe a área total:\n");
    scanf("%f", &varÁrea_02);

    getchar(); // Consome o '\n' do scanf após a entrada de float
    printf("\nO Produto Interno Bruto (PIB) da cidade em bilhões. Qual é o valor?\n");
    scanf("%f", &varPIB_02);

    getchar(); // Consome o '\n' do scanf após a entrada de float
    printf("\nQuantos pontos turísticos essa cidade oferece aos visitantes?\n");
    scanf("%d", &varPontosTuristivos_02);
    
    printf("\nCARTA 01");
    printf("\nEstado: %c", varEstado_01);
    printf("\nCódigo: %c01", varEstado_01);
    printf("\nNome da Cidade: %s", varCidade_01);
    printf("\nPopulação: %d", varPopulação_01);
    printf("\nÁrea(Km²): %.3f", varÁrea_01); // Usando %.3f para maior precisão
    printf("\nPIB: %.2f Bilhões", varPIB_01);
    printf("\nNúmero de Pontos Turísticos: %d", varPontosTuristivos_01);

    printf("\n\nCARTA 02");
    printf("\nEstado: %c", varEstado_02);
    printf("\nCódigo: %c02", varEstado_02);
    printf("\nNome da Cidade: %s", varCidade_02);
    printf("\nPopulação: %d", varPopulação_02);
    printf("\nÁrea(Km²): %.3f", varÁrea_02); // Usando %.3f para maior precisão
    printf("\nPIB: %.2f Bilhões", varPIB_02);
    printf("\nNúmero de Pontos Turísticos: %d", varPontosTuristivos_02);

    return 0;
}
