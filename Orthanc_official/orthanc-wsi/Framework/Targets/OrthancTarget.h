/**
 * Orthanc - A Lightweight, RESTful DICOM Store
 * Copyright (C) 2012-2016 Sebastien Jodogne, Medical Physics
 * Department, University Hospital of Liege, Belgium
 * Copyright (C) 2017-2021 Osimis S.A., Belgium
 * Copyright (C) 2021-2021 Sebastien Jodogne, ICTEAM UCLouvain, Belgium
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 **/


#pragma once

#include "IFileTarget.h"
#include "../../Resources/Orthanc/Stone/IOrthancConnection.h"

#include <Compatibility.h>  // For std::unique_ptr
#include <WebServiceParameters.h>

#include <memory>

namespace OrthancWSI
{
  class OrthancTarget : public IFileTarget
  {
  private:
    std::unique_ptr<OrthancStone::IOrthancConnection>  orthanc_;
    bool  first_;

  public:
    explicit OrthancTarget(const Orthanc::WebServiceParameters& parameters);

    explicit OrthancTarget(OrthancStone::IOrthancConnection* orthanc) :   // Takes ownership
      orthanc_(orthanc),
      first_(true)
    {
    }

    virtual void Write(const std::string& file) ORTHANC_OVERRIDE;
  };
}