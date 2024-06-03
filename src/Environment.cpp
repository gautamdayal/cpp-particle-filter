#include <Environment.h>

Environment::Environment() {

}

void Environment::add_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall_to_add) {
    this->walls.push_back(wall_to_add);
}

void Environment::draw_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall) {
    // Private helper function to deal with raylib rectangle stuff
    Eigen::Vector2d start = wall.first;
    Eigen::Vector2d end = wall.second;
    if (start[0] > end[0]) {
        // handle case where x value is greater
    } else {
        // handle case where y value is greater
    }
}

void Environment::draw_environment() {
    for (std::pair<Eigen::Vector2d, Eigen::Vector2d> wall : walls) {
        // Draw each wall as a raylib rectangle
        draw_wall(wall);
    }
}
