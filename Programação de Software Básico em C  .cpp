/*
 Author: Mateus Pontes
 Date: 01/Octuber/2022 
 Hour:19:00
 Project:Program that simulates a cafeteria.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int codprod, op, op2, qtd, qtdref, qtdsobre;
char *descricao, *descrrefre, *descrsobre;
float valor, valortotal, valorsobre,valorrefre,totalGeral;
 struct produto
 {
    char descricao, descrerefri,descrsobre;
    float valor, valortotal,valorsobre, valorrefri,total;
 };
 void MenuPrincipal (){
   printf("|===========================================|\n");
   printf("|             STARBUCKS CAFETERIA           |\n");
   printf("|===========================================|\n");
   printf("|    1-Fazer pedido   |  2-Imprimir Cupom   |\n");
   printf("|===========================================|\n");
   printf("|    3-Alterar Pedido |  4-Consultar        |\n");
   printf("|===========================================|\n");
   printf("Selecione a opção desejada ou 5 para sair \n");
   scanf("%d",&op2);
   system("cls");
 }
void bebidas(){
	
	printf(" ==================================\n");
	printf("|   ESCOLHA SUA BEBIDA DESEJADO    |\n");
	printf("|----------------------------------|\n");
	printf("|codigo   | Descricao    | Valor   |\n");
	printf("|----------------------------------|\n");
	printf("|   1     |     Suco     | 6.00    |\n");
	printf("|----------------------------------|\n");
	printf("|   2     | Refrigerante | 5.50    |\n");
	printf("|----------------------------------|\n");
	printf("|   3     |     Agua     | 3.00    |\n");
	printf(" ==================================\n");
	printf("informe o codigo dp produto \n");
	scanf("%d",&codprod);
	switch(codprod){
		case 1:{
			descricao="Suco";
			valor = 6.00;
			printf("informe a quantidade \n");
			scanf("%d",&qtd);
			break;
		}
		case 2:{
			descricao="Refrigerante";
			valor=5.50;
			printf("informe a quantidade \n");
			scanf("%d",&qtd);
			break;
		}
		case 3:{
			descricao="Agua";
			valor=3.00;
			printf("informe a quantidade \n");
			scanf("%d",&qtd);
			break;
		}
		
	}
}
void cardapio(){
	printf(" ==================================\n");
	printf("|  ESCOLHA O LANCHE DESEJADO       |\n");
	printf("|----------------------------------|\n");
	printf("|  Codigo   | Descricao   | Valor  |\n");
	printf("|----------------------------------|\n");
	printf("|    1      | Hamburg     | 5.50   |\n");
	printf("|----------------------------------|\n");
	printf("|    2      | Misto       | 4.50   |\n");
	printf("|----------------------------------|\n");
	printf("|    3      | Hot-dog     | 6.50   |\n");
	printf("|----------------------------------|\n");
	printf("|    4      | Cupcake     |  5.00  |\n");
	printf("|----------------------------------|\n");
	printf("|    5      | Cookie      |  3.00  |\n");
	printf("|==================================|\n");
	printf("Informe o código do produto \n");
	scanf("%d",&codprod);	
	switch(codprod){
		case 1:{
			   descricao="Hamburg";
			 valor = 5.50;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtd); 
			break;
		}
		case 2:{
			   descricao="Misto";
			 valor = 4.50;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtd);
			break;
		}
		case 3:{
			   descricao="Hot-Dog";
			 valor = 6.50;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtd);
			break;
		}
		case 4:{
			  descrrefre="Cupcake";
			 valorrefre = 5.00;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtdref);
			break;
		}
		case 5:{
			 descrrefre="Cookie";
			 valorrefre = 3.00;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtdref);
			break;
		}		
		
	}
	printf("Deseja pedir algum refrigerante ou outro item ? 1-Sim ou Zero para nÃ£o\n");
	scanf("%d",&op);
	system("cls");
	if (op==1){
		bebidas();
	}else{
	   cardapio();
	    	
	}
      
}
void visualizarCupom(){
	printf("===================================\n");
	printf("|      CONFIRA SEU CUPOM          |\n");
	printf("===================================\n");
	printf("|Descricao sanduiche  : %s\n",descricao);
	printf("|Quant sanduiche      : %d\n",qtd);
	printf("|Valor Unit sanduiche : %f\n",valor);
	printf("|Descricao refr.      : %s\n",descrrefre);
	printf("|Quant refri          : %d\n",qtdref);
	printf("|Valor Unit refri     : %f\n",valorrefre);
	printf("===================================\n");
	printf("|             TOTAIS              |\n");
	printf("==================================\n");
	printf("|Total item sanduiche : R$ %f \n", qtd*valor);
	printf("|Total item refri     : R$ %f \n", qtdref*valorrefre);
	printf("|Total a pagar        : R$ %f \n", ((qtd*valor)+(qtdref*valorrefre)));
	printf("===================================\n");
	printf("|   OBRIGADO PELA PREFERENCIA     |\n");
	printf("===================================\n");
}

main(){
	MenuPrincipal();
	switch(op2){
		case 1:{
			cardapio();
			visualizarCupom();
			break;
		}
		case 2:{
			visualizarCupom();
			
			break;
		}
		case 3:{
			//AlterarPedido();
			system("cls");
			break;
		}
		case  4:{
			//Consultar();
			break;
		}
	}	
}

