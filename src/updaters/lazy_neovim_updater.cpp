// Copyright 2025 <Heber Ferreira Barra>
#include "lazy_neovim_updater.hpp"
#include <cstdlib>

void LazyNeovimUpdater::update() {
    system("nvim --headless \"+Lazy! update\" +qa");
}
