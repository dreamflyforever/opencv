#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;
//string path = "/Users/jim/workspace/darknet/data/labels/59_6.png";
string path = "/Users/jim/workspace/darknet/data/giraffe.jpg";
#if 0
using namespace cv;
using namespace std;

int main()
{
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(10000); //显示图片不会一闪而过

	return 0;
}
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0);
	Mat img;

	while (true) {

		cap.read(img);

		imshow("Image", img);
		waitKey(1);
	}

	return 0;
}
#endif


int main()
{
	Mat srcImage, grayImage;
	srcImage = imread(path);
	Mat srcImage1 = srcImage.clone();
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	Mat dstImage, edge;

	blur(grayImage, grayImage, Size(3,3));
	Canny(grayImage, edge, 150, 100, 3);

	dstImage.create(srcImage1.size(), srcImage1.type());
	dstImage = Scalar::all(0);
	srcImage1.copyTo(dstImage, edge);
	imwrite("canny.jpg", dstImage);

	return 0;
}
