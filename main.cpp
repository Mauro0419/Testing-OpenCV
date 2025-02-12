#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int, char**){
    std::cout << "Hello, from Puede-si!/n";

    Mat image;
    image = imread("C:/Users/ADMIN/Downloads/c++/Puede-si/images.jpg");
    if ( !image.data )
    {
        printf("No image data /n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}
