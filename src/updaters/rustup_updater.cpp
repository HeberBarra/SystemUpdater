// Copyright 2025 <Heber Ferreira Barra>
#include "rustup_updater.hpp"
#include <cstdlib>

void RustupUpdater::update() {
    system("rustup update");
}

