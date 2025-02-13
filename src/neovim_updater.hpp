// Copyright 2025 <Heber Ferreira Barra>
#ifndef SRC_NEOVIM_UPDATER_HPP_
#define SRC_NEOVIM_UPDATER_HPP_
#include "updater.hpp"

class NeovimUpdater : public Updater {
 public:
    void update();
    ~NeovimUpdater(){}
};

#endif  // SRC_NEOVIM_UPDATER_HPP_
