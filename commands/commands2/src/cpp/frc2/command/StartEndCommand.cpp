// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "frc2/command/StartEndCommand.h"

using namespace frc2;

StartEndCommand::StartEndCommand(std::function<void()> onInit,
                                 std::function<void()> onEnd,
                                 std::initializer_list<std::shared_ptr<Subsystem>> requirements)
    : FunctionalCommand(
          std::move(onInit), [] {},
          [onEnd = std::move(onEnd)](bool interrupted) { onEnd(); },
          [] { return false; }, requirements) {}

StartEndCommand::StartEndCommand(std::function<void()> onInit,
                                 std::function<void()> onEnd,
                                 std::span<std::shared_ptr<Subsystem>> requirements)
    : FunctionalCommand(
          std::move(onInit), [] {},
          [onEnd = std::move(onEnd)](bool interrupted) { onEnd(); },
          [] { return false; }, requirements) {}
