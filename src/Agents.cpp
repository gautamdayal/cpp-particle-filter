#include "Agents.h"

void BaseAgent::motion_model_step(ActionSpace action) {
    // Depending on key press, change pose 
    switch (action) {
        case ActionSpace::FORWARD:
            break;
        case ActionSpace::BACKWARD:
            break;
        case ActionSpace::LEFT:
            break;
        case ActionSpace::RIGHT:
            break;
        case ActionSpace::CLOCKWISE:
            break;
        case ActionSpace::ANTI_CLOCKWISE:
            break;
    }
}

Eigen::VectorXd BaseAgent::sensor_model(const Environment& env) {
    // Get 2d rangefinder estimate as vector
    Eigen::VectorXd dummy {{1, 2, 3}};
    return dummy;
}

void BaseAgent::set_pose(const Eigen::Vector3d& new_pose) {
    for (size_t i = 0; i < 3; i++) {
        this->pose[i] = new_pose[i];
    }
}

void Particle::draw_particle() {
    
}

void Robot::draw_robot() {
}