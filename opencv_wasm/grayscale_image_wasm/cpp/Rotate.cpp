#include "RotateService.hpp"

extern "C" cv::Mat RotateImage(char *str) {
  Rotate rImage(str);
  return rImage.Action();
}

