// Copyright 2025 <Heber Ferreira Barra>
#include "../../headers/updaters/ohmyzsh_updater.hpp"
#include <cstdlib>
#include <iostream>

void OhMyZshUpdater::update() {
    system("omz update");
}

void OhMyZshUpdater::checkAvaliableUpdates() {
    std::cout << "Function not yet avaliable\n";
}

