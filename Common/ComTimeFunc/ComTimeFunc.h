#ifndef _COM_TIME_FUNC_H_
#define _COM_TIME_FUNC_H_


#include <pthread.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>


#define DEF_COM_DATE_STRING_LEN             40

void Wrap_Com_time_get_date_string(char *DateStr);

#endif

