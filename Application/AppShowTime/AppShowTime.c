#include "AppShowTime.h"
#include "Common.h"
#include "ComTimeFunc.h"

void* App_show_time_thread(void* arg)
{
    char DateStr[DEF_COM_DATE_STRING_LEN];

    while(Wrap_Get_g_thread_running_flag())
    {
        Wrap_Com_time_get_date_string(DateStr);
        printf("time: %s\n",DateStr);
        sleep(1);
    }

    pthread_exit(0);
}

void Wrap_App_show_time_init(void)
{
    pthread_t id;

    pthread_create(&id, NULL,App_show_time_thread, NULL);
    pthread_detach(id);
}
