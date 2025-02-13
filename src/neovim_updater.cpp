// Copyright 2025 <Heber Ferreira Barra>
#include "neovim_updater.hpp"
#include <cstdlib>

void NeovimUpdater::update() {
    system("nvim --headless \"+Lazy! update\" +qa");
}
