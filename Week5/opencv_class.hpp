#ifndef OPENCV_CLASS_
#define OPENCV_CLASS_
#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>

class image_class
{
public:
    image_class(std::string);
    void gray();
    void binalization(unsigned char);
    void save(std::string);
    void face_detect();
    void image_show();
private:
    cv::Mat img;
    int count;
};
#endif