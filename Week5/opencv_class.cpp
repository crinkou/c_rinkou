#include "opencv_class.hpp"


image_class::image_class(std::string input) : count(1)
{
    img = cv::imread(input);
}

void image_class::binalization(unsigned char threshold)
{
    cv::threshold(img, img, threshold, 255, cv::THRESH_BINARY);
}

void image_class::gray()
{
    cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);
}

void image_class::image_show()
{
    std::string image_label = "image_" + std::to_string(count);
    cv::imshow(image_label, img);
    cv::waitKey(2000);
}

void image_class::save(std::string file_name)
{
    cv::imwrite(file_name, img);
}