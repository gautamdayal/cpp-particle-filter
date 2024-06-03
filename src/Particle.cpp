#include <Particle.h>

Particle::Particle() {

}

void Particle::motion_model_step(ActionSpace action) {
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

Eigen::VectorXd Particle::sensor_model(const Environment& env) {
    // Get 2d rangefinder estimate as vector
}

void Particle::draw_particle() {
    
}
