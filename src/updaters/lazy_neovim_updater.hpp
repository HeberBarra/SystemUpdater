// Copyright 2025 <Heber Ferreira Barra>
#ifndef SRC_UPDATERS_LAZY_NEOVIM_UPDATER_HPP_
#define SRC_UPDATERS_LAZY_NEOVIM_UPDATER_HPP_
#include "../updater.hpp"

class LazyNeovimUpdater : public Updater {
 public:
    void update();
    ~LazyNeovimUpdater(){}
};

#endif  // SRC_UPDATERS_LAZY_NEOVIM_UPDATER_HPP_
