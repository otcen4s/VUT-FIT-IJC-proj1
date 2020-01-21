//===============================================================//
//File:         "ppm.h"
//Prelozene: 	gcc version 7.3.0
//Autor:        Matej Otcenas
//Login:        xotcen01
//Fakulta:      Fakulta informacnych technologii VUT v Brne
//Datum:        14.3.2019
//===============================================================//

#ifndef __PPM_H__
#define __PPM_H__

#include <stdio.h>

struct ppm{
	unsigned xsize;
	unsigned ysize;
	char data[];
};

struct ppm *ppm_read(const char * filename);
void ppm_free(struct ppm *p);

#endif // __PPM_H__
