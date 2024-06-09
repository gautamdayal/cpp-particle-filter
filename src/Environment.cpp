#include "Environment.h"

Environment::Environment(const std::string& filename) {
    this->add_walls_from_file(filename);
}

void Environment::add_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall_to_add) {
    this->walls.push_back(wall_to_add);
}

void Environment::add_walls(const std::vector<std::pair<Eigen::Vector2d, Eigen::Vector2d>>& walls_to_add) {
    for (std::pair<Eigen::Vector2d, Eigen::Vector2d> wall : walls_to_add) {
        this->add_wall(wall);
    }
}

void Environment::add_walls_from_file(const std::string& filename) {
    std::ifstream ifs(filename);
    std::string current_line;
    while (std::getline(ifs, current_line)) {
        std::istringstream ss(current_line);
        std::string value;
        std::vector<double> current_row_data;

        while (std::getline(ss, value, ',')) {
            current_row_data.push_back(std::stod(value));
        }

        if (current_row_data.size() == 4) {
            Eigen::Vector2d current_start(current_row_data[0], current_row_data[1]);
            Eigen::Vector2d current_end(current_row_data[2], current_row_data[3]);
            walls.push_back({current_start, current_end});
        }
    }
}

void Environment::draw_wall(std::pair<Eigen::Vector2d, Eigen::Vector2d> wall) {
    DrawLine(wall.first[0], wall.first[1], wall.second[0], wall.second[1], (Color){0, 0, 255, 255});
}

void Environment::draw_environment() {
    for (std::pair<Eigen::Vector2d, Eigen::Vector2d> wall : walls) {
        draw_wall(wall);
    }
}
