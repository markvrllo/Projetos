#include <stdio.h>

int tamanho_str( char palavra[] )
{
	int i;
	for(i =0; palavra[i] != '\0'; i++);
	
	return i;
}

void inverter(char palavra[], char invertida[])
{

	int tamanho= tamanho_str(palavra);
	

	for( int i = tamanho-1; i >= 0; i--)
	{
		invertida[ tamanho - i - 1 ] = palavra[ i ];
	}
	invertida[tamanho] = '\0';
	
}

int eh_igual( char palavra1[] , char palavra2[])
{
	int tam1 = tamanho_str(palavra1),
	    tam2 = tamanho_str(palavra2);
	    
	if( tam1 != tam2) 
		return 0;
	
	
	for(int i = 0; i < tam1; i++)
	{
		if( palavra1[i] != palavra2[i] )
			return 0;
	}
	
	
	return 1;
}

int eh_palindromo(char palavra[])
{
	char invertida[101];
	inverter(palavra, invertida);
	
	int ret;
	
	ret = eh_igual(palavra, invertida);

    return ret;
}

int contar_vogais(char palavra[])
{

	int cont=0;
	int tam = tamanho_str(palavra);
	
	for(int i = 0; i < tam; i++)
	{
		switch(palavra[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cont++;
			break;
		}
	}
	return cont;
}

int contar_consoantes(char palavra[])
{
	int tam = tamanho_str(palavra),
	   n_vogais = contar_vogais(palavra);
	   
	 return tam - n_vogais;
}

void para_maiusculas(char palavra[], char resultado[])
{
	int tam = tamanho_str(palavra);
	
	for(int i = 0; i < tam; i++)
	{
		resultado[i] = palavra[i] - 32;
	}
	resultado[tam] = '\0';
}

int main()
{
	char palavra[101], invertida[101],
	     p_maiuscula[101];
	
	scanf("%s",palavra);

	if( eh_palindromo(palavra) )
	{
		printf("Palindromo: SIM\n");
	}else
	{
		printf("Palindromo: NAO\n");	
	}
	
	printf("Vogais: %d | Consoantes: %d\n" ,
	    contar_vogais(palavra),  contar_consoantes(palavra) );

	para_maiusculas(palavra, p_maiuscula);

	printf("Maiuscula: %s\n", p_maiuscula);	

	inverter(palavra, invertida);

	printf("Invertida: %s\n", invertida);	
	
		
	return 0;
}
