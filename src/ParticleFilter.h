#include <Particle.h>

#pragma once

class ParticleFilter {
    public:
        ParticleFilter();
        Eigen::Vector3d get_current_estimate();
    private:
        std::vector<Particle&> particles;
        std::vector<double> particle_weights;
        Environment& env;
};
