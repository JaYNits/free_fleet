/*
 * Copyright (C) 2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef FF_RVIZ_PLUGINS__SRC__FFPANELSERVER_HPP
#define FF_RVIZ_PLUGINS__SRC__FFPANELSERVER_HPP

#include <ros/ros.h>
#include <ff_rviz_plugins_msgs/RobotState.h>

#include <free_fleet/Server.hpp>

namespace free_fleet {

class FFPanelServer
{

public:

  using SharedPtr = std::shared_ptr<FFPanelServer>;

  static SharedPtr make();

  FFPanelServer();

private:

};

} // namespace free_fleet

#endif // FF_RVIZ_PLUGINS__SRC__FFPANELSERVER_HPP
