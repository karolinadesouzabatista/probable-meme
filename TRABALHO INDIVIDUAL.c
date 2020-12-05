#include <stdio.h>
#include <stdlib.h>
#define MAX_QTD_SMARTPHONES 200

int main(){
	
    char MARCA_SMART [MAX_QTD_SMARTPHONES][10] = {"Samsung", "ASUS", "Apple", "HWAWEI", "Positivo", "Alcatel", "XIAOMI", "Samsung", "HWAWEI", "Alcatel"};
    char COR_SMART [MAX_QTD_SMARTPHONES][10] = {"Vermelho", "Roxo", "Azul", "Rosa", "Dourado", "Branco", "Preto", "Verde", "Neon", "Violeta"};
    int CODIGO_SMART [MAX_QTD_SMARTPHONES] = {141, 235, 895, 123, 111, 222, 333, 564, 785, 555};
    float PRECO_SMART [MAX_QTD_SMARTPHONES] = {499, 599, 620, 699, 720, 799, 820, 899, 920, 999};
    int UNIDADES_SMART [MAX_QTD_SMARTPHONES] = {65, 23, 74, 24, 17, 0, 21, 48, 56, 19};
	int i, Num_Escolhido, Atributo_Escolhido, Quantidade_Smartphones = 10, n;

    while(1){
    	
    	system ("cls"); 
	    printf("Menu\n1 - Vitrine de Smartphones\n2 - Alterar Dado de Smartphone\n3 - Cadastrar Smartphone\n");
	    switch (getch()){
	
		    case '1':{
		    	
		        system("cls");
		        printf ("Menu > Vitrine\n");
		        
		        for(i = 0; i < Quantidade_Smartphones; i++)
		        printf("Smartphone - %d\nCodigo do Smartphone %d:\n\tMarca:%s\n\tCor:%s\n\tUnidades disponiveis: %d\n\tPreco: R$%2.f\n", i, CODIGO_SMART[i], MARCA_SMART[i], COR_SMART[i], UNIDADES_SMART[i], PRECO_SMART[i]);
		        system("pause");
		        break;
		    }
	    
		    case '2':{

		        system("cls");
		        printf ("Menu > Alterar Dado de Smartphone\n");
				printf("Lista de Smartphones:\n");	    	
		    	for(i = 0; i < Quantidade_Smartphones; i++)
		        printf("Smartphone - %d\nCodigo do Smartphone %d:\n\tMarca:%s\n\tCor:%s\n\tUnidades disponiveis: %d\n\tPreco: R$%2.f\n", i, CODIGO_SMART[i], MARCA_SMART[i], COR_SMART[i], UNIDADES_SMART[i], PRECO_SMART[i]);		        
			    
				printf("\nDigite o numero do smartphone a ter seu dado alterado: ");
				scanf("%d", &Num_Escolhido);
				
				printf("\nAlterando os dados do smartphone %d\n", Num_Escolhido);
				printf("\tCodigo:%d\n\tMarca:%s\n\tCor: %s\n\tQuantidade %d\n\tPreco: R$%2.f\n", CODIGO_SMART[Num_Escolhido], MARCA_SMART[Num_Escolhido], COR_SMART[Num_Escolhido], UNIDADES_SMART[Num_Escolhido], PRECO_SMART[Num_Escolhido]);		        

				printf("Qual informacao voce deseja alterar?\nDigite 1 para Marca\n2 para Cor\n3 para Unidades disponiveis\n4 para Preco.\n");
				scanf("%d", &Atributo_Escolhido);
				
				switch(Atributo_Escolhido){
					
					case 1:{
						
						printf("Alterando o Tamanho:");
						scanf(" %s", MARCA_SMART[Num_Escolhido]);						
						continue;
					}
					case 2:{
						
						printf("Alterando a Cor:");
						scanf(" %s", COR_SMART[Num_Escolhido]);						
						continue;
					}
					case 3:{
						
						printf("Alterando a Quantidade disponivel:");
						scanf("%d", &UNIDADES_SMART[Num_Escolhido]);
						continue;
					}
					case 4:{
						
						printf("Alterando o preco:");
						scanf("%f", &PRECO_SMART[Num_Escolhido]);
						continue;
					}
				}			    
			}
			case '3':{
				
				system("cls");
		       	printf ("Menu > Cadastrar Smartphone\n");

		        printf("Lista de Smartphones:\n");	    	
		    	for(i = 0; i < Quantidade_Smartphones; i++)
		        printf("Smartphone - %d\nCodigo do Smartphone %d:\n\tMarca:%s\n\tCor:%s\n\tUnidades disponiveis: %d\n\tPreco: R$%2.f\n", i, CODIGO_SMART[i], MARCA_SMART[i], COR_SMART[i], UNIDADES_SMART[i], PRECO_SMART[i]);
		        
		       	printf ("Digite o codigo do smart para cadastro:");
		        scanf ("%d", &CODIGO_SMART[Quantidade_Smartphones]);

		        printf ("Digite a cor do smart para cadastro:");
		        scanf ("%s", COR_SMART[Quantidade_Smartphones]);

				printf ("Digite as unidades disponiveis para cadastro:");
				scanf ("%d", &UNIDADES_SMART[Quantidade_Smartphones]);

                printf ("Digite a marca do smart para cadastro:");
                scanf ("%s", MARCA_SMART[Quantidade_Smartphones]);

				printf ("Digite o preco do smart para cadastro:");
				scanf ("%f", &PRECO_SMART[Quantidade_Smartphones]);							
				Quantidade_Smartphones++;		    
				break;
			}			
		}
	}
	return 0;
}
