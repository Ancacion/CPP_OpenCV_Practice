//
//  Chapter3.cpp
//  C++_OpenCV
//
//  Created by Ancacion on 2022/6/17.
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include "Chapter3.hpp"

#define CHECK

using namespace cv;
using namespace std;

void Chapter3::ResizeImg() {
#ifdef CHECK
    cout << "Resize activate." << endl;
#endif
    string path = "./Resources/240047.jpeg"; //圖片路徑
    Mat img = imread(path); //讀取圖片路徑的圖片
    Mat imgResize;
    
    cout << img.size() << endl; //顯示原圖片大小
    //resize(img, imgResize, Size(1024, 768)); //調整圖片大小, 指定寬高像素
    resize(img, imgResize, Size(), 0.7, 0.7); //調整圖片大小, 指定原圖片寬高的小數倍
    
    imshow("Image", img); //顯示圖片
    imshow("ImageResize", imgResize); //顯示調整大小後圖片
    waitKey(0); //顯示
}

void Chapter3::CropImg() {
#ifdef CHECK
    cout << "Crop activate." << endl;
#endif
    string path = "./Resources/240047.jpeg"; //圖片路徑
    Mat img = imread(path); //讀取圖片路徑的圖片
    Mat imgCrop;
    
    Rect roi(100, 100, 300, 250); //令矩行 = roi(x座標, y座標, 寬, 高)
    imgCrop = img(roi); //按照roi設定裁切
    
    imshow("Image", img); //顯示圖片
    imshow("ImageCrop", imgCrop); //顯示裁切出來的圖片
    waitKey(0); //顯示
}
