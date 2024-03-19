#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main()
{
    Mat img = imread("../Visual_Pattern_Recognition-Practice_3-8_semester/image.jpg", IMREAD_COLOR);
    if (img.empty()){
        cout << "Изображение не загружено" << endl;
        return -1;
    }
    namedWindow("Original", WINDOW_NORMAL);
    imshow("Original", img);
    Mat GRAY_img, CIE_XYZ_img, YCC_img, HSV_img, CIE_Lab_img, CIE_Luv_img, HLS_img, YUV_img;

    cvtColor(img, GRAY_img, COLOR_BGR2GRAY);
    namedWindow("GRAY", WINDOW_NORMAL);
    imshow("GRAY", GRAY_img);

    cvtColor(img, CIE_XYZ_img, COLOR_BGR2XYZ);
    namedWindow("CIE XYZ", WINDOW_NORMAL);
    imshow("CIE XYZ", CIE_XYZ_img);

    cvtColor(img, YCC_img, COLOR_BGR2YCrCb);
    namedWindow("YCC", WINDOW_NORMAL);
    imshow("YCC", YCC_img);

    cvtColor(img, HSV_img, COLOR_BGR2HSV);
    namedWindow("HSV", WINDOW_NORMAL);
    imshow("HSV", HSV_img);

    cvtColor(img, CIE_Lab_img, COLOR_BGR2Lab);
    namedWindow("CIE Lab", WINDOW_NORMAL);
    imshow("CIE Lab", CIE_Lab_img);

    cvtColor(img, CIE_Luv_img, COLOR_BGR2Luv);
    namedWindow("CIE Luv", WINDOW_NORMAL);
    imshow("CIE Luv", CIE_Luv_img);

    cvtColor(img, HLS_img, COLOR_BGR2HLS);
    namedWindow("HLS", WINDOW_NORMAL);
    imshow("HLS", HLS_img);

    cvtColor(img, YUV_img, COLOR_BGR2YUV);
    namedWindow("YUV", WINDOW_NORMAL);
    imshow("YUV", YUV_img);

    waitKey(0);
    return 0;
}
