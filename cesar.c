#include <cesar.h>
#include <string.h>

/*
 * Este método usa a criptografia de cesar para criptografar menssagens
 * Parametros:
 * 	chave de valor inteiro
 * 	tipo de ação do método "criptografar" ou "descriptografar"
 * 	texto a ser processado
 * O retorno deverá ser o texto criptografado ou descriptografado
 */
unsigned char *cesar(unsigned int key, unsigned char action, const char *value){
	int len = strlen(value);
	unsigned char *swap = swap;
	if(action == CRIPT){ /*Verifica se vai criptografar*/
		swap = (unsigned char*) malloc(len);
		strcpy(swap, value);
		while(len--){
			if(swap[len] != 13){
				swap[len] -= 32;
				swap[len] = ((int)swap[len] + key) % 95;
				swap[len] += 32;
			}
		}
	}
	else if(action == DECRIPT){ /*Verifica se vai descriptografar*/
		swap = (unsigned char*) malloc(len);
		strcpy(swap,value);
		while(len--){
			if(swap[len] != 13){
				swap[len] -= 32;
				signed int x = ((signed int) swap[len] - key);
				x = (x < 0 ? 95+x : x);
				swap[len] = (unsigned char) x;
				swap[len] += 32;
			}
		}
	}

	return swap;
}
