#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
int main()
{
	const uchar Noir = 0;
	const uchar Blanc = 255;
	

	/*std::string image_path = samples::findFile("starry_night.jpg");
	Mat img = imread(image_path, IMREAD_COLOR);*/
	//cvtColor(img, grayImg, IMREAD_GRAYSCALE);

	Mat grayImg = Mat::zeros(1000, 1000, CV_8U);

	//dessin du carré

	for (int i = 40; i < 240; ++i)
		grayImg.at<uchar>(i,40) = Blanc;


	for (int j = 40; j < 240; ++j)
			grayImg.at<uchar>(40,j) = Blanc;

	for (int i = 40; i < 240; ++i)
		grayImg.at<uchar>(i, 240) = Blanc;


	for (int j = 40; j < 240; ++j)
		grayImg.at<uchar>(240, j) = Blanc;


	//dessin des diagonales

	for (int i = 40, j = 40; i < 240 && j < 240; ++i, ++j)
	{
		grayImg.at<uchar>(i, j) = Blanc;
	}

	for (int i = 40, j = 240; i <= 240 && j >= 40; ++i, --j)
	{
		grayImg.at<uchar>(i, j) = Blanc;
	}

	imshow("Image en niveau de Gris", grayImg);
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
}