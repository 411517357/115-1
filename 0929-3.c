#include <stdio.h>
int main(){

    int me=13;//01101
    int a=9;//  01001 客廳
    int b=5;//  00101 臥室
    int c=2;//  00010 廚房

    printf("目前客廳設備:%d\n",me&a);
    printf("目前臥室設備:%d\n",me&b);
    printf("目前廚房設備:%d\n",me&c);
    printf("廚房切換後目前設備狀態:%d\n",me^c);

   
    return 0;
}