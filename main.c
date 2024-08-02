#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include "AppShowTime.h"

unsigned char g_thread_running_flag = 1;

unsigned char Wrap_Get_g_thread_running_flag(void)
{
    return g_thread_running_flag;
}

int main(void)
{
    /*
    创建业务逻辑功能线程，主函数内不做任何处理
    */
    Wrap_App_show_time_init();

    while(g_thread_running_flag)
    {
        sleep(1);
    }

    return 0;
}

