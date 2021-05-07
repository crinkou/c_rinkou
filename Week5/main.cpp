#include "opencv_class.hpp"

int main()
{
    image_class Image("C:\\Users\\tsuch\\Github\\c_rinkou\\Week5\\lena.jpg");
    Image.image_show();
    Image.gray();
    Image.image_show();
    Image.binalization(120);
    Image.image_show();
    Image.save("binary.png");
    return 0;
}