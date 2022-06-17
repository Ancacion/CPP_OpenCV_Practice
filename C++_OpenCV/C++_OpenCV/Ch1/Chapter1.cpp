//
//  Chapter1.cpp
//  C++_OpenCV
//
//  Created by Ancacion on 2022/6/17.
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include "Chapter1.hpp"

#define CHECK

using namespace cv;
using namespace std;

//讀取圖片
void Chapter1::ReadImage() {
#ifdef CHECK
    cout << "ReadImage activate." << endl;
#endif
    string path = "./Resources/test.png"; //圖片路徑
    Mat img = imread(path); //讀取圖片路徑的圖片
    imshow("Image", img); //顯示圖片
    waitKey(1000); //顯示一秒
}

//讀取影片
void Chapter1::ReadVideo() {
#ifdef CHECK
    cout << "ReadVideo activate." << endl;
#endif
    string path = "./Resources/test_video.mp4"; //影片路徑
    VideoCapture cap(path); //抓取影片路徑
    Mat img;
    
    while(1) {
        cap.read(img); //將影片轉成圖片
        imshow("Image", img); //顯示從影片來的圖片
        waitKey(20); //每20ms換一張圖片
    }
}

//讀取攝影機
void Chapter1::ReadWebcam() {
#ifdef CHECK
    cout << "ReadWebcam activate." << endl;
#endif
    VideoCapture cap(0); //路徑為數字代表攝影機
    Mat img;
    
    while(1) {
        cap.read(img);
        imshow("Image", img);
        waitKey(1);
    }
}
