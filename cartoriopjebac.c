#include <stdio.h> //biblioteca de comunica��o com o usu�rio 
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//in�cio da cria��o de vari�veis/string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    char telefone[40];
    char email[40];
    //final da cria��o de vari�veis/string
    
    printf("Digite o cpf a ser cadastrado: "); //coletando informa��o do usu�rio
    scanf("%s",cpf); //%s refere-se a string
    
    strcpy(arquivo, cpf); //Respons�vel por copiar os valores das string
    
    FILE*file; //Cria o arquivo
    file = fopen(arquivo, "w"); //Cria o arquivo e o ''w'' significa escrever
    fprintf(file,cpf); //Salvo o valor da vari�vel
    fclose(file); //Fecha o arquivo
    
    file = fopen(arquivo, "a"); //cria o arquivo
    fprintf(file,","); //salva o valor d vari�vel 
    fclose(file); //fecha o arquivo
    

    printf("Digite o nome a ser cadastrado: "); //coletando informa��o do usu�rio
    scanf("%s",nome);//%s refere-se a string
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,nome);//salva o valor d vari�vel 
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,",");//Salvo o valor da vari�vel
    fclose(file);//fecha o arquivo
    
    printf("Digite o sobrenome a ser cadastrado:");//coletando informa��o do usu�rio
     scanf("%s",sobrenome);//%s refere-se a string
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,sobrenome);//Salvo o valor da vari�vel
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,",");//Salvo o valor da vari�vel
    fclose(file);//fecha o arquivo
    
    printf("Digite o cargo a ser cadastrado:");//coletando informa��o do usu�rio
     scanf("%s",cargo);//%s refere-se a string
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,cargo);//Salvo o valor da vari�vel
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,",");//Salvo o valor da vari�vel
    fclose(file);//fecha o arquivo
    
    printf("Digite o telefone a ser cadastrado:");//coletando informa��o do usu�rio
      scanf("%s",telefone);//%s refere-se a string
      
      file = fopen(arquivo, "a");//cria o arquivo
      fprintf(file,telefone);//salvo o valor da vari�vel
      fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a");//cria o arquivo
    fprintf(file,",");//Salvo o valor da vari�vel
    fclose(file);//fecha o arquivo
    
    printf("Digite o email a ser cadastrado:");//coletando informa��o do usu�rio
      scanf("%s",email);//%s refere-se a string
      
      file = fopen(arquivo, "a");//cria o arquivo
      fprintf(file,email);//salvo o valor da vari�vel
      fclose(file);//fecha o arquivo
    

    
    system("pause");
    
    
}
int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem 
	
	char cpf[40];
	char conteudo[200];
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf); //%s refere-se a string
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL);
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	}
	
	    system("pause");
	
	
}
    int deletar()
{
	
    char cpf[40];
    
    printf("Digite o cpf a ser deletado: ");
    scanf("%s", cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL);
    
    {
    	printf("O usu�rio n�o se encontra no sistema!.\n");
    	system("pause");
    	
    	
	}
}


int main()
{
	int opcao=0; //definindo vari�veis
	int laco=1;
	
    for(laco=1;laco=1;)
{
	
	    system("cls");
	
	    setlocale(LC_ALL, "Portuguese"); //definindo a linguagem 
	
	    printf("\tBem vindo(a) ao Cart�rio da EBAC!\n\n"); //in�cio do menu
	    printf(" Digite a op��o que deseja no menu abaixo:\n\n");
	    printf("\t1- Registrar nomes\n");
    	printf("\t2- Consultar nomes\n");
    	printf("\t3- Deletar nomes\n\n");
    	printf("\t4- Sair do sistema\n\n");
    	printf("Op��o:"); //fim do menu
	
        scanf("%d", &opcao);  //armazenando escolha do usu�rio
    
        system("cls"); //respondavel por limpar a tela
        
        switch(opcao)
        {
        	
            case 1:	
	    	registro(); //chamada de fun��es
            break;
            
            case 2:
            consulta();
			break;
			
			case 3:
			deletar();
   	    	break;
   	    	
   	    	case 4:
   	    	printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;	
   	    	
   	    	default:
			printf("Essa op��o n�o est� dispon�vel!\n");
	    	system("pause");
	    	break;
	    	
		}
	
	
   	}
}


