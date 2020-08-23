//
// Created by jw on 2020/8/23.
//

#ifndef VISION_TRACK_COMMON_DEFINES_H
#define VISION_TRACK_COMMON_DEFINES_H
#include <vector>
#include <opencv2/opencv.hpp>

typedef float track_t;
typedef cv::Point_<track_t> Point_t;
typedef std::vector<Point_t> Points_t;

namespace VISION_TRACK{
    namespace TRACKING{

        enum FilterType{
            KalmanLinear,
            KalmanUnscented,
            KalmanAugmentedUnscented
        };
    }
}
#endif //VISION_TRACK_COMMON_DEFINES_H
