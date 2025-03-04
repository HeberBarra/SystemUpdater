// Copyright 2025 <Heber Ferreira Barra>
#ifndef HEADERS_UPDATERS_LAZY_NEOVIM_UPDATER_HPP_
#define HEADERS_UPDATERS_LAZY_NEOVIM_UPDATER_HPP_
#include "../updater.hpp"

class LazyNeovimUpdater : public Updater {
 public:
    void update();
    void autoConfirmUpdate();
    void checkAvaliableUpdates();
    ~LazyNeovimUpdater(){}
};

#endif  // HEADERS_UPDATERS_LAZY_NEOVIM_UPDATER_HPP_
