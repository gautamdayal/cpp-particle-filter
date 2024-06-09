#include <Environment.h>
#include <Eigen/Dense>

#pragma once 

enum ActionSpace;

class Particle {
    public:
        Particle();   
        Eigen::VectorXd sensor_model(const Environment& env);
        void motion_model_step(ActionSpace action);
        void draw_particle();
    private:
        Eigen::Vector3d pose; // Pose stored as x, y, theta
};

enum ActionSpace {
    FORWARD,
    BACKWARD,
    RIGHT,
    LEFT,
    CLOCKWISE,
    ANTI_CLOCKWISE
};
