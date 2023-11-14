#include "myfb.h"

extern void *p_fbmem;
extern size_t fbmem_size;
extern const unsigned char gImage_ASCII_565[1105200];
extern const unsigned char gImage_ASCII_888[1657800];

/* 主函数 */
int main(){

	if( fbInit() ){
		fprintf(stderr, "Device \"%s\" initialized failed.\n", basename(DEVICE_FB_PATHNAME));
		return -1;
	}

	memset(p_fbmem, 0x00, fbmem_size);

	fbShowImage(0, 0,gImage_ASCII_888, 921, 600);

	fbDestory();
	return 0;
}

/* 
	位深 : 一个像素点占用多少位来存储颜色数据

	
*/
