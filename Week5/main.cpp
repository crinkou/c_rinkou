#include "opencv_class.hpp"

int main()
{
    image_class Image("/home/ericlab/program_file/c_rinkou/Week5/lena.jpg");
    Image.image_show();
    Image.gray();
    Image.image_show();
    Image.binalization(120);
    Image.image_show();
    Image.save("binary.png");
    return 0;
}