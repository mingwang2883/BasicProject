#include "AppPrintData.h"

void Wrap_App_print_data(void)
{
    int i = 0;
    int len = 0;
    unsigned char buf_str[24] = "Hello World";
    unsigned char buf_dec[24] = {72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100};
    unsigned char buf_hex[24] = {0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x57, 0x6f, 0x72, 0x6c, 0x64};

    len = strlen((char *)buf_str);

    printf("dec: ");
    for(i = 0;i < len;i++)
    {
        printf("%d ",buf_str[i]);
    }
    printf("\n");

    printf("hex: ");
    for(i = 0;i < len;i++)
    {
        printf("0x%02x ",buf_str[i]);
    }
    printf("\n");

    printf("buf_dec: %s\n",buf_dec);
    printf("buf_hex: %s\n",buf_hex);
}

void Wrap_App_print_mixture_data(void)
{
    int len = 0;
    unsigned char buf_str[24];
    unsigned char buf_hex[24] = {0x55, 0xaa, 0x00, 0x03, 0x0b, 0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x57, 0x6f, 0x72, 0x6c, 0x64};

    memset(buf_str,0,sizeof(buf_str));

    len = strlen((char *)buf_hex);
    printf("buf_hex len: %d\n",len);

    memcpy(buf_str,buf_hex + 5,0x0b);
    printf("buf_str: %s\n",buf_str);
}
