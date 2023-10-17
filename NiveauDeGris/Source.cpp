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

	Mat grayImg = Mat::zeros(400, 450, CV_8U);

	for (int i = 0; i < 200; ++i)
		for (int j = 0; j < 200; ++j)
			grayImg.at<uchar>(i, j) = Blanc;
		
	
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