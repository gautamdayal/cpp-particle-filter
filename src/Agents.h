#include "Environment.h"
#include <Eigen/Dense>

#pragma once 

enum ActionSpace {
    FORWARD,
    BACKWARD,
    RIGHT,
    LEFT,
    CLOCKWISE,
    ANTI_CLOCKWISE
};


class BaseAgent {
    public:
        BaseAgent() : pose(Eigen::Vector3d::Zero()) {}
        void motion_model_step(ActionSpace action);
        Eigen::VectorXd sensor_model(const Environment& env);
        void set_pose(const Eigen::Vector3d& new_pose);
        Eigen::Vector3d get_pose() const {return pose;}
    protected:
        Eigen::Vector3d pose;
};

class Robot : BaseAgent {
    public:
        void draw_robot();
};

class Particle : BaseAgent {
    public:
        void draw_particle();
};

