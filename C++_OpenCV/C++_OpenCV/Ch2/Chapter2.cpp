//
//  Chapter2.cpp
//  C++_OpenCV
//
//  Created by Ancacion on 2022/6/17.
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include "Chapter2.hpp"

#define CHECK

using namespace cv;
using namespace std;

void Chapter2::BasicFunc() {
#ifdef CHECK
    cout << "BasicFunc activate." << endl;
#endif
    string path = "./Resources/image.png"; //圖片路徑
    Mat img = imread(path); //讀取圖片路徑的圖片
    Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;
    
    cvtColor(img, imgGray, COLOR_BGR2GRAY); //將圖片從彩色(BGR)轉成灰階(GRAY)
    GaussianBlur(img, imgBlur, Size(7, 7), 5, 0); //高斯模糊
    Canny(imgBlur, imgCanny, 10, 30); //讀取圖片內邊緣偵測
    
    Mat kernel = getStructuringElement(MORPH_RECT, Size(10, 10)); //調整膨脹形狀與大小
    dilate(imgCanny, imgDil, kernel); //影像膨脹
    erode(imgDil, imgErode, kernel); //影像侵蝕
    
    imshow("Image", img); //顯示圖片
    imshow("ImageGray", imgGray); //顯示灰階圖片
    imshow("ImageBlur", imgBlur); //顯示高斯模糊圖片
    imshow("ImageCanny", imgCanny); //顯示黑白線條圖片
    imshow("ImageDilation", imgDil); //顯示影像膨脹圖片
    imshow("ImageErode", imgErode); //顯示影像侵蝕圖片
    waitKey(0); //顯示
}
