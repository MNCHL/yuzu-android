// SPDX-FileCopyrightText: 2023 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "core/device_memory_manager.h"

namespace VideoCore {
class RasterizerInterface;
}

namespace Tegra {

struct MaxwellDeviceMethods;

struct MaxwellDeviceTraits {
    static constexpr bool supports_pinning = false;
    static constexpr size_t device_virtual_bits = 32;
    using DeviceInterface = typename VideoCore::RasterizerInterface;
    using DeviceMethods = typename MaxwellDeviceMethods;
};

using MaxwellDeviceMemoryManager = Core::DeviceMemoryManager<MaxwellDeviceTraits>;

} // namespace Tegra