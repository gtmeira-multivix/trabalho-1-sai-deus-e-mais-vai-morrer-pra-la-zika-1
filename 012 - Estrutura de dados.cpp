#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 100

struct Pilha
{
	char dados[MAX];
	int topo;
};

Pilha p;

int push(char px);
int pop(char *px);
int calc_pri(char px);

main()
{
	char exp[101], val, val1, val2;
	int i,vet2[101],controla2=0,resultado,total;
	
	printf("Digite a equacao: ");
	gets(exp);
	printf("\nResultado: ");
	
	p.topo = -1; // iniciar pilha (vazia)
	i = 0;
	while (exp[i] != '\0')
	{
		if(exp[i] >=48 && exp[i]<=56){
            push(exp[i]);


		}
		else if(exp[i]=='+'){
            vet2[controla2]=1;
  push('|');       
		}else if(exp[i]=='-'){
            vet2[controla2]=2;
            controla2++;
             push('|');  
		}else if(exp[i]=='*'){
            vet2[controla2]=3;
            controla2++;
             push('|');  
		}else if(exp[i]=='/'){
            vet2[controla2]=4;
            controla2++;
             push('|');  
		}else if(exp[i]=='^'){
			vet2[controla2]=5;
            controla2++;
             push('|');
		}

	total++;				
		i++;	
	}
	for(int i=0;i<total;i++){
	
if(vet2[i]==1)
resultado=((pop(&val1))+(pop(&val2)));

}

printf("%d",resultado);
	getch();
		
}

int push(char px)
{
	if (p.topo == MAX - 1)
		return 1; // pilha cheia
	else
	{
		p.topo++;
		p.dados[p.topo] = px;
		return 0; // inseriu na pilha	
	}	
}

int pop(char *px)
{
	if (p.topo == -1)
		return 1; // pilha vazia
	else
	{
		*px = p.dados[p.topo];
		p.topo--;
		return 0; // removeu da pilha	
	}
}


