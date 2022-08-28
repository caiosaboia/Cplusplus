#include <iostream>
//A diretiva de pre-processador #include
//Indica parar incluir o arquivo de cabeçalho
//iostream


int main()
//funcao principal. Todo programa C++ começa 
//com esta funcao principal main()

{ //chaves
	// { indica inicio de um bloco
	//cout é um comando de saída de dados
	//neste caso está solicitando para
	//colocar na saida padrao(tela)
	//a frase especificada
	std::cout << "Primeiro Codigo" << std::endl;
	/*endl indica para inserir um caracter de
	quebra de linha na frase ('string')*/
	system("color 0A");
	system("PAUSE");
	//chama o shell do windows (DOS)
	//e coloca este comando 'PAUSE'
	return 0;
	//retorna para o sistema operacional zero
	//zero é o padrão para informar que tudo deu certo!
	//assim se a função main der certo, ela retorna 0(zero)

}	// } indica o final de um bloco

//CTRL + SHIFT + B - Compilar o código fonte
//CTRL + F5 - executar o programa
//ALT + SHIFT + <ENTER> Maximizar/Minimizar Janela
//CTRL + K + C comentar o codigo 
//CTRL + C no final da linha copia ela toda
//sem precisar selecionar toda a linha
