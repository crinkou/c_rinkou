#include "opencv_class.hpp"

int main()
{
    image_class Image("/home/tsuchida/Desktop/lena.png");
    Image.image_show();
    Image.gray();
    Image.image_show();
    Image.binalization(120);
    Image.image_show();
    Image.save("binary.png");
    return 0;
}