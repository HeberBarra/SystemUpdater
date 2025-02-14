// Copyright 2025 <Heber Ferreira Barra>
#include "../../headers/updaters/flatpak_updater.hpp"
#include <cstdlib>

void FlatpakUpdater::update() {
    system("sudo flatpak update");
}

