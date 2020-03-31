#include "hud.h"
#include <hls_opencv.h>

int main (int argc, char** argv) {

IplImage* src;
IplImage* dst;
axis  dst_axi;
int y;



dst = cvCreateImage(cvSize(1920,1080),IPL_DEPTH_32S, 1);


hud_gen( dst_axi, 1080, 1920, 3, 7);

AXIvideo2IplImage(dst_axi, dst);

cvSaveImage("op.bmp", dst);
cvReleaseImage(&dst);
}
