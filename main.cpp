#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	string path = "/Users/jim/workspace/darknet/data/labels/59_6.png";
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(0); //显示图片不会一闪而过

	return 0;
}

