//
//  main.cpp
//  C++_OpenCV
//
//  Created by Ancacion on 2022/6/15.
//
//Tutorial video: https://www.youtube.com/watch?v=2FYm3GOonhk
//Source: https://github.com/murtazahassan/Learn-OpenCV-cpp-in-4-Hours

#include "Chapter1.hpp"
#include "Chapter2.hpp"
#include "Chapter3.hpp"
#include "Chapter4.hpp"

//#define CH1
//#define CH2
//#define CH3
#define CH4

using namespace std;

int main() {
    //CH1主要內容為如何開啟圖片, 影片與攝影機
#ifdef CH1
    Chapter1 chapter1;
    //chapter1.ReadImage();
    //chapter1.ReadVideo();
    chapter1.ReadWebcam();
#endif
    //CH2主要內容為圖片的修改(灰階, 高斯模糊, 圖片邊緣, 影像膨脹與侵蝕)
#ifdef CH2
    Chapter2 chapter2;
    chapter2.BasicFunc();
#endif
    //CH3主要內容為圖片的縮放與截取
#ifdef CH3
    Chapter3 chapter3;
    //chapter3.ResizeImg();
    chapter3.CropImg();
#endif
    //CH4的主要內容為生成圖片與文字
#ifdef CH4
    Chapter4 chapter4;
    chapter4.DrawingShapes();
#endif
    
    return 0;
}
