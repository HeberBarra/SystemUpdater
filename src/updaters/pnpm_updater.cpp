// Copyright 2025 <Heber Ferreira Barra>
#include "../../headers/updaters/pnpm_updater.hpp"
#include <cstdlib>

void PnpmUpdater::update() {
    system("pnpm self-update");
    system("pnpm update");
}

void PnpmUpdater::checkAvaliableUpdates() {
    system("pnpm outdated");
}

