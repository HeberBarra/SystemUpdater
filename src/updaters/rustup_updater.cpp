// Copyright 2025 <Heber Ferreira Barra>
#include "../../headers/updaters/rustup_updater.hpp"
#include <cstdlib>

void RustupUpdater::update() {
    system("rustup update");
}

