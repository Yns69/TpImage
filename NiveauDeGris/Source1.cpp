#include "Header.h"

Mat& SetPixel(Mat& image, int ligne, int colonne, const uchar couleur)
{
	image.at<uchar>(ligne, colonne) = couleur;
	return image;
}
Mat& setPixelIterator(Mat& image, int ligne, int colonne, const uchar couleur)
{
	MatIterator_<uchar> it;
	int nbligne = image.rows;
	it = image.begin<uchar>() + (ligne * image.cols + colonne);
	*it = couleur;

	return image;
}

Mat& setPixelPtr(Mat& image, int ligne, int colonne, const uchar couleur)
{
	uchar* p;
	int nbligne = image.rows;
	p= image.data + (ligne * image.cols + colonne);
	*p = couleur;


	return image;
}