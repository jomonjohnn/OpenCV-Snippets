/* 
    OpenCV-Snippets 
    Copyright (C) 2010  Jomon John 

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.


This program will load & show the input image file given as the argument 

Tested with OpenCV 2.2 in Ubuntu 10.04.1 LTS
*/

#include "highgui.h"
#include <stdio.h>

int main( int argc, char** argv )
{
	if (argc != 2)
	{
		printf("\n Usage: image_load <image>\n\n");
		exit(1) ;
	}

	IplImage* img = cvLoadImage( argv[1],1); 	// Load image from argument
	cvNamedWindow("Image", CV_WINDOW_AUTOSIZE );// creates a window 
	cvShowImage("Image", img );					// show Loaded image on the window
	cvWaitKey(0);								// wait for a keypress
	cvReleaseImage( &img );						// Release Image
	cvDestroyWindow("Image");					// Destroy window
	exit(0);
}
