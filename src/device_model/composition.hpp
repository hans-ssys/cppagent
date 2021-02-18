//
// Copyright Copyright 2009-2021, AMT – The Association For Manufacturing Technology (“AMT”)
// All rights reserved.
//
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//

#pragma once

#include "component_configuration.hpp"
#include "description.hpp"
#include "utilities.hpp"

#include <list>
#include <map>
#include <memory>
#include <optional>
#include <sstream>
#include <string>
#include <utility>

namespace mtconnect
{
  class Composition
  {
  public:
    Composition() = default;
    virtual ~Composition() = default;

    static entity::FactoryPtr getFactory();

    const entity::EntityPtr &getEntity() const { return m_entity; };
    void setEntity(entity::EntityPtr new_entity) { m_entity = new_entity; };

  protected:
    entity::EntityPtr m_entity;
  };
}  // namespace mtconnect
