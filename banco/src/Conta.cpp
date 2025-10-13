#include "Conta.hpp"
#include <iostream>
#include <string>

// Definição e inicialização do membro estático privado 'numeroDeContas'.
// Esta variável é ÚNICA e COMPARTILHADA por todos os objetos da classe Conta.
//
// MEMÓRIA E TEMPO DE VIDA:
// 1. É alocada no 'segmento de dados' memoria global(static), onde fica as variáveis estáticas e globais
//
// 2. Possui 'duração de armazenamento estática': 
//      É criada quando o programa inicia e destruída apenas quando o programa termina.
//
// 3. Sua existência NÃO DEPENDE da criação de nenhum objeto da classe.

int Conta::numeroDeContas{}; // Inicializacao do atributo static privado
                      // Pode ser acessado por dentro de qualquer objeto da classe Conta e modificado.
                      // Numero de Contas vai ser somado 1 todas as vezes que for chamado 
                      // um construtor de um objeto da classe Conta

Conta::Conta( const std::string &nomeTitular, const std::string &cpfTitular, const std::string &numero, const double &saldo ) :
    titular( nomeTitular, Cpf{ cpfTitular } ),
    numero( numero )
    // Esses atributos sao obrigados a serem construidos por lista de inicialização porque sao atributos constantes "const"
{  
    this->saldo = saldo; // Não é obrigatório, mas é menos eficiente
    numeroDeContas++;
}

Conta::Conta( const Titular &titular, const std::string &numero ) : 
    titular( titular ),
    numero( numero ),
    saldo( 0 )
{
    numeroDeContas++;
}  
    // Lista de inicialização -> uma forma mais compacta de criar um construtor 
    // Compilador consegue otimizar - processo de inicialização acontece somente uma vez

    /*

    Initialization list
    A diferença é crucial:

        Inicialização:  Quando você usa a lista de inicialização, 
                        os membros são construídos diretamente com os valores fornecidos. 
                        É um processo único: a criação do membro já acontece com o valor correto.

        Atribuição:     Quando você atribui dentro do corpo do construtor, 
                        os membros são primeiro inicializados por padrão (o construtor padrão é chamado) 
                        e depois recebem um novo valor através do operador de atribuição (=). 
                        Isso pode ser menos eficiente.
        
    */

    /*

    Initialization list
    Uso obrigatório nos seguintes cenários "A simples atribuição dentro do corpo do construtor ({}) não funcionará":

        Para inicializar membros const:
            Membros constantes precisam receber seu valor no exato momento da criação e não podem ser alterados depois. 
            A lista de inicialização é o único lugar para fazer isso.

        Para inicializar membros que são referências (&):
            Assim como as constantes, referências devem ser "ligadas" a outra variável no momento em que são criadas, 
            e isso só pode ser feito na lista de inicialização.

        Para membros de classes que não possuem construtor padrão:
            Se uma classe-membro não tem um construtor que não recebe argumentos (um construtor Classe()), 
            você é obrigado a chamar um construtor válido para ela na lista de inicialização.

        Para chamar um construtor específico da classe base (em herança):
            Se a classe pai (base) não tiver um construtor padrão, ou 
            se você precisar chamar um construtor específico dela que aceite argumentos, 
            isso deve ser feito na lista de inicialização do construtor da classe filha (derivada).

    */

Conta::~Conta(){
    numeroDeContas--;
}

Conta& Conta::sacar( const double &valor ){
    const  double valorDeSaque{ valor * taxaDeSaque() + valor };
    if( ( saldo - valorDeSaque ) >= 0){
        saldo -= valorDeSaque;
    } else{
        std::cerr << "Saldo insuficiente!";
    }
    return *this;
}

Conta& Conta::depositar( const double &valor ){
    const  double valorDeDeposito{ valor - ( valor * taxaDeSaque() ) };
    saldo += valorDeDeposito;
    return *this;
}

double Conta::getSaldo() const{
    return  saldo;
}

Titular Conta::getTitular() const{
    return titular;
}

std::string Conta::getNumero() const{
    return numero;
}