#ifndef __CESAR__
	#define __CESAR__

	#include <string.h>
	#include <malloc.h>

	#define CRIPT	1
	#define DECRIPT	2

	enum{
		SHORT = 2,
		MEDDLE = 8,
		LONG = 16
	}KEYS;

	unsigned char *cesar(unsigned int key, unsigned char action, const char *value);

#endif
