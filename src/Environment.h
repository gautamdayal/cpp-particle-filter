#include <iostream>
#include <vector>
#include <utility>
#include <Eigen/Dense>

#pragma once

class Environment {
    public:
        Environment();
        void draw_environment();
    private:
        std::vector<std::pair<Eigen::Vector2d, Eigen::Vector2d>> walls;
};