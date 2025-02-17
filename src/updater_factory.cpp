// Copyright 2025 <Heber Ferreira Barra>

#include <memory>
#include "../headers/updater_factory.hpp"
#include "../headers/updater.hpp"
#include "../headers/updaters/flatpak_updater.hpp"
#include "../headers/updaters/lazy_neovim_updater.hpp"
#include "../headers/updaters/ohmyzsh_updater.hpp"
#include "../headers/updaters/pnpm_updater.hpp"
#include "../headers/updaters/rustup_updater.hpp"
#include "../headers/updaters/zypper_updater.hpp"

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
        case RUSTUP:
            updater = std::unique_ptr<Updater>(new RustupUpdater());
            break;
        case OHMYZSH:
            updater = std::unique_ptr<Updater>(new OhMyZshUpdater());
            break;
        case PNPM:
            updater = std::unique_ptr<Updater>(new PnpmUpdater());
            break;
        case ZYPPPER:
            updater = std::unique_ptr<Updater>(new ZypperUpdater());
            break;
        case DUMMY:
        case DUMMY_LAST:
            break;
    }

    return updater;
}

