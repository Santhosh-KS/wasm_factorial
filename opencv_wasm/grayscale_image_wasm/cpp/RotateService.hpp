#pragma once

#include<string>
#include <opencv2/opencv.hpp>

class Rotate
{
  private:
    std::string File;
    cv::Mat Source;
    cv::Mat Result;

  public:
    Rotate(const std::string &str);
    ~Rotate();
    cv::Mat Action();
};

