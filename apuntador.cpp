#include <stdio.h>
#include <string.h>


int palindromo( char palabra[ 20 ] ,  int longitud  ){
	int i = 0, j = longitud-1;

	while( true ){

		if( i == j )
			break;

		if( palabra[ i ] != palabra[ j ])
			return 0;

		i++; j--;
	}

	return 1;

}

int main(){
	
	char letras[ 20 ];
	printf("Palabra ");
	scanf("%s" , letras);

	if( palindromo( letras  ,  strlen(letras) ) )
		printf("Es palindromo\n");
	else
		printf("No palindromo\n");

	return 0;
}