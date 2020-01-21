//===============================================================//
//File:     "error.h"
//Autor:    Matej Otcenas
//Login:    xotcen01
//Fakulta:  Fakulta informacnych technologii VUT v Brne
//Datum:    19.3.2019
//===============================================================//

#ifndef __ERROR_H__
#define __ERROR_H__

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void warning_msg(const char *fmt, ...);
void error_exit(const char *fmt, ...);

#endif // __ERROR_H__
