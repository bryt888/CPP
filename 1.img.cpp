// 导入opencv 库
#include <opencv2/opencv.hpp>
#include <iostream>
int main(int argc,char** argv)
{
    //read image
    cv::Mat image=cv::imread("./media/cat.jpg");
    if (image.empty()) {
        std::cout << " can't read image " <<std::endl;
        return 1;
    }
    //print image size
    // 输出图片高度和宽度
	std::cout << "image height: " << image.rows << std::endl;
	std::cout << "image width: " << image.cols << std::endl;
}