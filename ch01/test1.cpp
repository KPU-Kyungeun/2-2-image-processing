#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("../resources/ch01/Lenna.jpg", IMREAD_COLOR);
	if (src.empty())
	{
		cout << "영상을 읽을 수 없음" << endl;
	}
	imshow("src", src);
	Mat gray, edge, output;
	cvtColor(src, gray, CV_BGR2GRAY);
	imshow("gray", gray);
	imwrite("../resources/out-image/gray.jpg", gray);
	waitKey(0);
	return 0;
}