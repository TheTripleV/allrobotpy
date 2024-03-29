// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <span>

#include <wpi/SmallVector.h>

#include "frc2/command/CommandBase.h"
#include "frc2/command/CommandHelper.h"
#include "frc2/command/SetUtilities.h"

namespace frc2 {
/**
 * Schedules the given commands when this command is initialized. Useful for
 * forking off from CommandGroups. Note that if run from a composition, the
 * composition will not know about the status of the scheduled commands, and
 * will treat this command as finishing instantly.
 */
class ScheduleCommand : public CommandBase {
 public:
  /**
   * Creates a new ScheduleCommand that schedules the given commands when
   * initialized.
   *
   * @param toSchedule the commands to schedule
   */
  explicit ScheduleCommand(std::span<std::shared_ptr<Command>> toSchedule);

  explicit ScheduleCommand(std::shared_ptr<Command> toSchedule);

  ScheduleCommand(ScheduleCommand&& other) = default;

  ScheduleCommand(const ScheduleCommand& other) = default;

  void Initialize() override;

  bool IsFinished() override;

  bool RunsWhenDisabled() const override;

 private:
  wpi::SmallVector<std::shared_ptr<Command>, 4> m_toSchedule;
};
}  // namespace frc2
