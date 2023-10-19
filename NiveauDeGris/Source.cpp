#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include "Header.h"


using namespace cv;
int main()
{
	const uchar Noir = 0;
	const uchar Blanc = 255;
	Mat grayImg = Mat::zeros(1000, 1000, CV_8U);
	Mat grayImg2= Mat::zeros(1000, 1000, CV_8U);
	grayImg.copyTo(grayImg2);
	
	for (int i = 40; i < 240; ++i)
		setPixelPtr(grayImg, i, 40, Blanc);

	/*std::string image_path = samples::findFile("starry_night.jpg");
	Mat img = imread(image_path, IMREAD_COLOR);*/
	imshow("Image en niveau de Gris", grayImg);
	imshow("Image en niveau de Gris2", grayImg2);
		int k = waitKey(0); // Wait for a keystroke in the window
		if (k == 's')
		{
			imwrite("starry_night.png", grayImg);
		}
	
	
		/*if (img.empty())
		{
			std::cout << "Could not read the image: " << image_path << std::endl;
			return 1;
		}*/
		
		return 0;


//	//cvtColor(img, grayImg, IMREAD_GRAYSCALE);
//
//
//	//dessin du carr�
//
//		//setPixelIterator(grayImg, i, 40, Blanc);
//		//SetPixel(grayImg, i, 40, Blanc);
//		//grayImg.at<uchar>(i,40) = Blanc;
//
//
//	for (int j = 40; j < 240; ++j)
//		setPixelPtr(grayImg, 40, j, Blanc);
//		//setPixelIterator(grayImg, 40, j, Blanc);
//		//SetPixel(grayImg, 40, j, Blanc);
//
//	for (int i = 40; i < 240; ++i)
//		setPixelPtr(grayImg, i, 240, Blanc);
//		//setPixelIterator(grayImg, i, 240, Blanc);
//		//SetPixel(grayImg, i, 240, Blanc);
//
//
//	for (int j = 40; j < 240; ++j)
//		setPixelPtr(grayImg, 240, j, Blanc);
//		//setPixelIterator(grayImg, 240, j, Blanc);
//		//SetPixel(grayImg, 240, j, Blanc);
//
//
//	//dessin des diagonales
//
//	for (int i = 40, j = 40; i < 240 && j < 240; ++i, ++j)
//	{
//		setPixelPtr(grayImg, i, j, Blanc);
//		//setPixelIterator(grayImg, i,j , Blanc);
//		//SetPixel(grayImg, i, j, Blanc);
//	}
//
//	for (int i = 40, j = 240; i <= 240 && j >= 40; ++i, --j)
//	{
//		setPixelPtr(grayImg, i, j, Blanc);
//		//setPixelIterator(grayImg, i, j, Blanc);
//		//SetPixel(grayImg, i, j, Blanc);
//	}
//	
//	imshow("Image en niveau de Gris", grayImg);
//	int k = waitKey(0); // Wait for a keystroke in the window
//	if (k == 's')
//	{
//		imwrite("starry_night.png", grayImg);
//	}
//
//
//	/*if (img.empty())
//	{
//		std::cout << "Could not read the image: " << image_path << std::endl;
//		return 1;
//	}*/
//	
//	return 0;
}
