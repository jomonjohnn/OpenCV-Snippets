/* 

This program will load & show the input image file given as the argument 

*/
#include "highgui.h"
#include <stdio.h>

int main( int argc, char** argv )
{
  if (argc<2)
	{
	printf("\n Usage: image_load <image>\n\n");
	exit(1) ;
	}
  IplImage* img = cvLoadImage( argv[1],1);
  cvNamedWindow("Image", CV_WINDOW_AUTOSIZE );
  cvShowImage("Image", img );
  cvWaitKey(0);
  cvReleaseImage( &img );
  cvDestroyWindow("Image");
  exit(0);
}
