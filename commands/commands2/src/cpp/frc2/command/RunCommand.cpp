// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "frc2/command/RunCommand.h"

using namespace frc2;

RunCommand::RunCommand(std::function<void()> toRun,
                       std::initializer_list<std::shared_ptr<Subsystem>> requirements)
    : FunctionalCommand([] {}, std::move(toRun), [](bool interrupted) {},
                    [] { return false; }, requirements) {}

RunCommand::RunCommand(std::function<void()> toRun,
                       std::span<std::shared_ptr<Subsystem>> requirements)
    : FunctionalCommand([] {}, std::move(toRun), [](bool interrupted) {},
                    [] { return false; }, requirements) {}
