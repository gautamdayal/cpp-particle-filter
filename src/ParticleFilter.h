#include <Particle.h>

#pragma once

class ParticleFilter {
    public:
        ParticleFilter();
    private:
        std::vector<Particle&> particles;
};
