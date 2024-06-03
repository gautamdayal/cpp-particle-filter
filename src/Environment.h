#include <iostream>
#include <vector>
#include <utility>
#include <Eigen/Dense>
#include <raylib.h>

#pragma once

class Environment {
    public:
        Environment();
        void add_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall_to_add);
        void draw_environment();
    private:
        void draw_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall);
        std::vector<std::pair<Eigen::Vector2d, Eigen::Vector2d>> walls; // Pairs formatted as <start point, end point> though order doesn't really matter 
};
