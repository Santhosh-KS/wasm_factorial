#include "RotateService.hpp"

Rotate::Rotate(const std::string &str) : File(str)
{
  // Reading the image
  Source = cv::imread(File);
}

Rotate::~Rotate()
{
  // Empty
}

cv::Mat Rotate::Action()
{

  cv::Point2f center(Source.cols/2, Source.rows/2);
  double rotationAngle=-30;
  double scale=1;

  // Getting the matrix which will define the rotation
  cv::Mat M = cv::getRotationMatrix2D(center,
      rotationAngle, scale);

  // Rotating the source and storing in result
  cv::warpAffine(Source, Result, M,
      cv::Size(Source.cols, Source.rows));

  return Result;
}
