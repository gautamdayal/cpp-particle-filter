#include <Environment.h>
#include <Eigen/Dense>

#pragma once 

class Particle {
    public:
        Particle();
        void motion_model_step();
        Eigen::VectorXd sensor_model(const Environment& env);
    private:
        Eigen::Vector3d pose; // Pose stored as x, y, theta
};
