#include <stdio.h>
#include <cesar.h>

void main(){
	char texto[64];
	strcpy(texto,"mensagem de texto A-Z 0-9 a-z !-~");

	puts(texto);
		strcpy(texto, cesar(32, CRIPT, texto));
	puts(texto);
		strcpy(texto, cesar(32, DECRIPT, texto));
	puts(texto);
}
