// Copyright 2025 <Heber Ferreira Barra>
#include "../../headers/updaters/rustup_updater.hpp"
#include <cstdlib>
#include <iostream>

void RustupUpdater::update() {
    system("rustup update");
}

void RustupUpdater::autoConfirmUpdate() {
    this->update();
}

void RustupUpdater::checkAvaliableUpdates() {
    std::cout << "Option not yet avaliable :(\n";
}

