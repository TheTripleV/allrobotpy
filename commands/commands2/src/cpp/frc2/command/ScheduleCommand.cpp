// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "frc2/command/ScheduleCommand.h"

using namespace frc2;

ScheduleCommand::ScheduleCommand(std::span<std::shared_ptr<Command>> toSchedule) {
  SetInsert(m_toSchedule, toSchedule);
}

ScheduleCommand::ScheduleCommand(std::shared_ptr<Command> toSchedule) {
  std::shared_ptr<Command> v[] = {toSchedule};
  SetInsert(m_toSchedule, {v, 1});
}

void ScheduleCommand::Initialize() {
  for (auto command : m_toSchedule) {
    Command_Schedule(command);
  }
}

bool ScheduleCommand::IsFinished() {
  return true;
}

bool ScheduleCommand::RunsWhenDisabled() const {
  return true;
}
