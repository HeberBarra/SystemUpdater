// Copyright 2025 <Heber Ferreira Barra>

#include "../../headers/updaters/zypper_updater.hpp"
#include <cstdlib>

void ZypperUpdater::update() {
    system("sudo zypper dup");
}

void ZypperUpdater::autoConfirmUpdate() {
    system("sudo zypper dup --auto-agree-with-licenses --no-confirm");
}

void ZypperUpdater::checkAvaliableUpdates() {
    system("zypper list-updates -a");
}

