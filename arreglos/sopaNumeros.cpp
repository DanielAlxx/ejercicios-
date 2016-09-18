#include <stdio.h>

int sopa [10][10],
		numero[ 4 ],
		n,k,encontrado;

void print(){

	for (int i = 0; i < 10; i++ )
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", sopa[ i ][ j ]);
		}

		printf("\n\n");
	}

	printf("[ %d %d %d %d ]\n", numero[ 0 ], numero[ 1 ], numero[ 2 ], numero[ 3 ] );

	printf("\n\n");
}


int main(){

	encontrado = 0;
	
	// lectura de la entrada
	for( int i = 0 ; i < 10 ;i ++ )
		for (int j = 0; j < 10 ; j++)
			scanf("%d", &sopa[ i ][ j ]);

	for (int i = 0; i < 4 ;  i++ )
		scanf("%d" , &numero[ i ]);

	print();

	//busqueda horizontal
	
	for ( int i = 0 ; i < 10 ; i++ ){
		
		if( encontrado )
			break;

		for (int j = 0 ; j < 7; j++ ){

			if( encontrado )
				break;

			if( sopa[ i ][ j ] == numero[ 0 ] )// posible coincidencia
			{
				if( sopa[ i ][ j+1 ] == numero[ 1 ] && sopa[ i ][ j+2 ] == numero[ 2 ] && sopa[ i ][ j+3 ] == numero[ 3 ] ){
					encontrado = 1;
					printf("EL NUMERO SI EXISTE DE FORMA HORIZONTAL\n");
					break;
				}
			}
		}
	}

	//busqueda vertical
	
	for ( int j = 0 ; j < 10 ; j++ )
	{
		if( encontrado )
			break;

		for (int i = 0 ; i < 7; i++ ){
			if( encontrado )
				break;

			if( sopa[ i ][ j ] == numero[ 0 ] )// posible coincidencia
			{
				if( sopa[ i+1 ][ j ] == numero[ 1 ] && sopa[ i+2 ][ j ] == numero[ 2 ] && sopa[ i+3 ][ j ] == numero[ 3 ] ){
					encontrado = 1;
					printf("EL NUMERO SI EXISTE DE FORMA VERTICAL\n");
					break;
				}
			}
		}
	}


	if (!encontrado)
		printf("EL NUMERO NO EXISTE\n");
	
	
		
	return 0;


}