#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv; 

const uchar Noir = 0;
const uchar Blanc = 255;

Mat& SetPixel(Mat& image , int ligne, int colonne ,  const uchar couleur);
Mat& setPixelIterator(Mat& image, int ligne, int colonne, const uchar couleur);
Mat& setPixelPtr(Mat& image, int ligne, int colonne, const uchar couleur);


