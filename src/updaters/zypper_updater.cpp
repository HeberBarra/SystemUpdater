// Copyright 2025 <Heber Ferreira Barra>

#include "zypper_updater.hpp"
#include <cstdlib>

void ZypperUpdater::update() {
    system("sudo zypper dup");
}

