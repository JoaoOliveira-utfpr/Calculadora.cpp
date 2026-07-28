#include <iostream>
#include <cmath>

//FUNÇÕES

//apresentar layout do menu e receber a opçao do usuario
int apresentarMenu(){
    int opcao;
    std::cout << "==============================\n";
    std::cout << "Escolha uma das opcoes abaixo: \n";
    std::cout << "1. Adicao\n";
    std::cout << "2. Subtracao\n";
    std::cout << "3. Multiplicacao\n";
    std::cout << "4. Divisao\n";
    std::cout << "5. Raiz de x\n";
    std::cout << "6. Potenciacao de x\n";
    std::cout << "7. Porcentagem de x\n";
    std::cout << "0. Sair\n";
//recebe a opção do usuario
    std::cout << "Digite a opcao desejada: ";
    std::cin >> opcao;
    std::cout << "==============================\n";
    return opcao;
}

//recebendo valores do usuario
float recebeValorX(){
    float x = 0;
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    return x;
}
float recebeValorY(){
    float y = 0;
    std::cout << "Digite o valor de y: ";
    std::cin >> y;
    return y;
}

//adicao
float adicao(float x, float y){
    return x + y;
}

//subtracao
float subtracao(float x, float y){
    return x - y;
}

//multiplicacao
float multiplicacao(float x, float y){
    return x * y;
}

//divisao
float divisao(float x, float y){
    return x / y;
}

//raiz de x
float raiz(float x, float y){
    if( x < 0 && static_cast<int>(y) % 2 == 0){
        std::cout << "Erro: Raiz de numero negativo nao e permitida para radicais pares.\n";
        return NAN;
    }
    return pow(x, 1.0 / y);
}

//potenciacao de x
float potenciacao(float x, float y){
    return pow(x, y);
}

//porcentagem de x
float porcentagem(float x, float y){
    return (x * y) / 100;
}

//FUNÇÃO PRINCIPAL
int main() {
//criacao de variaveis
    int opcao = 0;
    float x = 0, y = 0;
//loop para apresentar o menu ao usuario
    do {
        opcao = apresentarMenu();
        switch (opcao) {
            case 1:
                std::cout << "Voce escolheu Adicao.\n";
                x = recebeValorX();
                y = recebeValorY();
                std::cout << "Resultado: " << adicao(x, y) << "\n";
                break;
            case 2:
                std::cout << "Voce escolheu Subtracao.\n";
                x = recebeValorX();
                y = recebeValorY();
                std::cout << "Resultado: " << subtracao(x, y) << "\n";
                break;
            case 3:
                std::cout << "Voce escolheu Multiplicacao.\n";
                x = recebeValorX();
                y = recebeValorY();
                std::cout << "Resultado: " << multiplicacao(x, y) << "\n";
                break;
            case 4:
                std::cout << "Voce escolheu Divisao.\n";
                x = recebeValorX();
                y = recebeValorY();
                std::cout << "Resultado: " << divisao(x, y) << "\n";
                break;
            case 5:
                std::cout << "Voce escolheu Raiz de x.\n";
                x = recebeValorX();
                y = recebeValorY();
                std::cout << "Resultado: " << raiz(x, y) << "\n";
                break;
            case 6:
                std::cout << "Voce escolheu Potenciacao de x.\n";
                x = recebeValorX();
                y = recebeValorY();
                std::cout << "Resultado: " << potenciacao(x, y) << "\n";
                break;
            case 7:
                std::cout << "Voce escolheu Porcentagem de x.\n";
                x = recebeValorX();
                y = recebeValorY();
                std::cout << "Resultado: %" << porcentagem(x, y) << "\n";
                break;
            case 0:
                std::cout << "Saindo do programa...\n";
                break;
            default:
                std::cout << "Opcao invalida. Tente novamente.\n";
        }
//o loop se encerra apenas quando o usuario digitar 0 para sair do programa
    } while (opcao != 0);
    return 0;
}