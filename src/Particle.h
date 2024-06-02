#include <Environment.h>
#include <Eigen/Dense>

#pragma once 

class Particle {
    public:
        Particle();   
        Eigen::VectorXd sensor_model(const Environment& env);
        void motion_model_step();
        void draw_particle();
    private:
        Eigen::Vector3d pose; // Pose stored as x, y, theta
};
