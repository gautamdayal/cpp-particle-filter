#include <iostream>
#include <vector>
#include <utility>
#include <Eigen/Dense>
#include <raylib.h>
#include <cmath>
#include <string>
#include <fstream>

#pragma once

class Environment {
    public:
        Environment(const std::string& filename);
        void add_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall_to_add);
        void add_walls(const std::vector<std::pair<Eigen::Vector2d, Eigen::Vector2d>>& walls_to_add);
        void add_walls_from_file(const std::string& filepath);
        void draw_environment();
    private:
        void draw_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall);
        std::vector<std::pair<Eigen::Vector2d, Eigen::Vector2d>> walls; // Pairs formatted as <start point, end point> though order doesn't matter 
};
