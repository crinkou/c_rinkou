#ifndef OPENCV_CLASS_
#define OPENCV_CLASS_
#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>

class image_class
{
public:
    image_class(std::string);
    void binalization();
    void save(std::string);
    void face_detect();
};
#endif