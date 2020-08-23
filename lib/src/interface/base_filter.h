//
// Created by jw on 2020/8/23.
//

#ifndef VISION_TRACK_BASE_FILTER_H
#define VISION_TRACK_BASE_FILTER_H

#include <string>
#include <eigen3/Eigen/Dense>
#include <common_defines.h>

namespace VISION_TRACK{
    namespace FILTER{
        class BaseFilter{
        public:
            BaseFilter(): name_("BaseFilter"){}
            virtual ~BaseFilter() {}
            virtual void Init(Points_t) = 0;
            virtual Point_t pointPrediction(double time_diff) = 0;
            virtual Point_t update()
        protected:
            std::string name_;
        };
    }
}
#endif //VISION_TRACK_BASE_FILTER_H
