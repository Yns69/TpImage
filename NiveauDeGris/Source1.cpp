#include "Header.h"

Mat& SetPixel(Mat& image, int ligne, int colonne, const uchar couleur)
{
	image.at<uchar>(ligne, colonne) = couleur;

}