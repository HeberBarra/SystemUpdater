// Copyright 2025 <Heber Ferreira Barra>

#include <memory>
#include "updater_factory.hpp"
#include "updater.hpp"
#include "flatpak_updater.hpp"
#include "lazy_neovim_updater.hpp"
#include "zypper_updater.hpp"

std::unique_ptr<Updater> UpdaterFactory::createUpdater(
        UpdatersNames updaterName
) {
    std::unique_ptr<Updater> updater;

    switch (updaterName) {
        case FLATPAK:
            updater = std::unique_ptr<Updater>(new FlatpakUpdater());
            break;
        case LAZY_NEOVIM:
            updater = std::unique_ptr<Updater>(new LazyNeovimUpdater());
            break;
        case ZYPPPER:
            updater = std::unique_ptr<Updater>(new ZypperUpdater());
            break;
    }

    return updater;
}

