
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main()
{
    cout << "OpenCV Version: " << CV_VERSION << endl;

   // namedWindow("游戏原画");
    cout<<img.size<<endl;
    imshow("游戏原画", img);
    waitKey(0);
    return 0;
}

