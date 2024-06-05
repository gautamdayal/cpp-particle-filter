#include "Environment.h"

Environment::Environment() {
    // Defining outer walls
    // Change this to storing walls in a txt file or similar and then parsing to contstruct the environment
    Eigen::Vector2d top_wall_start(50, 50);
    Eigen::Vector2d top_wall_end(750, 50);
    Eigen::Vector2d bottom_wall_start(50, 550);
    Eigen::Vector2d bottom_wall_end(750, 550);
    Eigen::Vector2d right_wall_start(750, 50);
    Eigen::Vector2d right_wall_end(750, 550);
    Eigen::Vector2d left_wall_start(50, 50);
    Eigen::Vector2d left_wall_end(50, 550);

    this->add_wall({top_wall_start, top_wall_end});
    this->add_wall({bottom_wall_start, bottom_wall_end});
    this->add_wall({right_wall_start, right_wall_end});
    this->add_wall({left_wall_start, left_wall_end});
}

void Environment::add_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall_to_add) {
    this->walls.push_back(wall_to_add);
}

void Environment::draw_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall) {
    Eigen::Vector2d start = wall.first;
    Eigen::Vector2d end = wall.second;
    int height;
    int width;
    if (start[1] == end[1]) {
        std::cout << "Wall is horizontal" << std::endl;
        height = 10;
        std::cout << "Width of wall: " << std::abs(start[0] - end[0]) << std::endl;
        width = std::abs(start[0] - end[0]);
    } else {
        height = std::abs(start[1] - end[1]);
        width = 10;
    }
    DrawRectangle(start[0], start[1], width, height, (Color){0, 0, 255, 255});
}

void Environment::draw_environment() {
    for (std::pair<Eigen::Vector2d, Eigen::Vector2d> wall : walls) {
        draw_wall(wall);
    }
}
