#include "ComTimeFunc.h"


void Wrap_Com_time_get_date_string(char *DateStr)
{
    time_t currTime;
    struct tm *currDate;

    time(&currTime);
    currDate = localtime(&currTime);

    memset(DateStr, 0, DEF_COM_DATE_STRING_LEN);
    strftime(DateStr, DEF_COM_DATE_STRING_LEN, "%Y-%m-%d %H:%M:%S", currDate);
}
