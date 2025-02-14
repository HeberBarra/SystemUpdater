// Copyright 2025 <Heber Ferreira Barra>
#include "../../headers/updaters/pnpm_updater.hpp"
#include <cstdlib>

void PnpmUpdater::update() {
    system("pnpm update");
}

