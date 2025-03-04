// Copyright 2025 <Heber Ferreira Barra>
#include "../../headers/updaters/flatpak_updater.hpp"
#include <cstdlib>

void FlatpakUpdater::update() {
    system("sudo flatpak update");
}

void FlatpakUpdater::autoConfirmUpdate() {
    system("sudo flatpak update --noninteractive --assumeyes");
}

void FlatpakUpdater::checkAvaliableUpdates() {
    system("flatpak remote-ls --updates");
}

