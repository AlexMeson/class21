#include "myfb.h"

/* 全局变量 */
int fb_fd;
struct fb_var_screeninfo vinfo;	/* 用来存储屏幕信息可变参数 */
size_t fbmem_size;
void *p_fbmem = NULL;

void fbDisplayPixel(int x, int y, int color){

}

void fbDisplayLineData(int x, int y, int width, const unsigned char *pline){

}

void fbDisplayImage(int x, int y,const unsigned char *pImage, int width, int height){
	
}


/* 将一张图片显示在LCD中 RGB565 */
void fbShowImage(int x, int y,const unsigned char *pImage, int width, int height){
	/* 在屏幕中找到显示图片的起始地址 */
	void *pen = p_fbmem + (y * vinfo.xres + x) * vinfo.bits_per_pixel / 8;
	size_t fb_line    = vinfo.xres * vinfo.bits_per_pixel / 8;
	size_t image_line = width * 2;
	unsigned char *p_image = (unsigned char *)pImage;
	int i;
	for(i = 0; i < height; i++){
		memcpy(pen, p_image, image_line);
		p_image += image_line;
		pen += fb_line;
	}
}

/* fb设备初始化 */
int fbInit(){
	if( -1 == (fb_fd = open(DEVICE_FB_PATHNAME, O_RDWR)) ){	/* 获取fb设备文件描述符 */
		perror("open");
		return -1;
	}

	/* 获取fb设备 可变参数(动态参数) */
	if( -1 == ioctl(fb_fd, FBIOGET_VSCREENINFO, &vinfo) ){
		perror("ioctl");
		return -1;
	}
	fbmem_size = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8 ;

	/* 内存映射 */
	p_fbmem = mmap(NULL, fbmem_size, PROT_READ | PROT_WRITE, MAP_SHARED, fb_fd, 0);
	if( p_fbmem == (void *)-1 ){
		perror("mmap");
		return -1;
	}

	printf("==== Device \"%s\" initialized succeed ====\n", basename(DEVICE_FB_PATHNAME));
	printf("screen width   : %u px\n", vinfo.xres);
	printf("screen height  : %u px\n", vinfo.yres);
	printf("bits per pixel : %u bits\n", vinfo.bits_per_pixel);
	printf("=========================================\n");
	return 0;
}

/* fb设备释放 */
int fbDestory(){
	if(munmap(p_fbmem, fbmem_size) == -1){
		perror("munmap");
		return -1;
	}
	close(fb_fd);
	return 0;
}

