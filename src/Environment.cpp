#include "Environment.h"

Environment::Environment() {

}

void Environment::add_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall_to_add) {
    this->walls.push_back(wall_to_add);
}

void Environment::draw_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall) {
    // Private helper function to deal with raylib rectangle stuff
    Eigen::Vector2d start = wall.first;
    Eigen::Vector2d end = wall.second;
    int height;
    int width;
    if (start[0] == end[0]) {
        // handle case where x values identical
        height = 10;
        std::cout << start[1] << " " << end[1] << std::endl;
        width = std::abs(start[1] - end[1]);
    } else {
        // handle case where y values identical
        height = std::abs(start[0] - end[0]);
        width = 10;
    }
    std::cout << "h=" << height << ", w=" << width << std::endl;
    DrawRectangle(start[0], start[1], width, height, (Color){0, 0, 255, 255});
}

void Environment::draw_environment() {
    for (std::pair<Eigen::Vector2d, Eigen::Vector2d> wall : walls) {
        // Draw each wall as a raylib rectangle
        draw_wall(wall);
    }
}
