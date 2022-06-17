//
//  Chapter4.cpp
//  C++_OpenCV
//
//  Created by Ancacion on 2022/6/17.
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include "Chapter4.hpp"

#define CHECK

using namespace cv;
using namespace std;

void Chapter4::DrawingShapes() {
#ifdef CHECK
    cout << "DrawingShapes activate." << endl;
#endif
    Mat img(480, 640, CV_8UC3, Scalar(255, 255, 128)); //高640, 寬480, 8bit unsigned 3種顏色, 選擇顏色(RGB)
    
    circle(img, Point(320, 240), 100, Scalar(0, 128, 255), FILLED); //在圖片內加入圓形
    rectangle(img, Point(100, 0), Point(150, 640), Scalar(255, 0, 0), FILLED); //在圖片內加入矩形
    line(img, Point(450, 0), Point(640, 640), Scalar(0, 0, 255), 4); //在圖片內加入線條
    
    putText(img, "Anca's OpenCV practice.", Point(200, 400), FONT_HERSHEY_COMPLEX, 1, Scalar(150, 200, 16), 2); //在圖片內加入文字
            //    加入的文字                  文字的xy座標       文字字型            文字大小    文字顏色。    文字粗細
    imshow("Image", img); //顯示圖片
    waitKey(0); //顯示
}
