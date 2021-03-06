# Orthanc - A Lightweight, RESTful DICOM Store
# Copyright (C) 2012-2016 Sebastien Jodogne, Medical Physics
# Department, University Hospital of Liege, Belgium
# Copyright (C) 2017-2022 Osimis S.A., Belgium
# Copyright (C) 2021-2022 Sebastien Jodogne, ICTEAM UCLouvain, Belgium
#
# This program is free software: you can redistribute it and/or
# modify it under the terms of the GNU Affero General Public License
# as published by the Free Software Foundation, either version 3 of
# the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Affero General Public License for more details.
# 
# You should have received a copy of the GNU Affero General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.



include(${CMAKE_CURRENT_LIST_DIR}/DatabasesFrameworkConfiguration.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/../Orthanc/CMake/AutoGeneratedCode.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/../Orthanc/Plugins/OrthancPluginsExports.cmake)


if (STATIC_BUILD OR NOT USE_SYSTEM_ORTHANC_SDK)
  if (ORTHANC_SDK_VERSION STREQUAL "0.9.5")
    include_directories(${ORTHANC_DATABASES_ROOT}/Resources/Orthanc/Sdk-0.9.5)
  elseif (ORTHANC_SDK_VERSION STREQUAL "1.4.0")
    include_directories(${ORTHANC_DATABASES_ROOT}/Resources/Orthanc/Sdk-1.4.0)
  elseif (ORTHANC_SDK_VERSION STREQUAL "1.5.2")
    include_directories(${ORTHANC_DATABASES_ROOT}/Resources/Orthanc/Sdk-1.5.2)
  elseif (ORTHANC_SDK_VERSION STREQUAL "1.5.4")
    include_directories(${ORTHANC_DATABASES_ROOT}/Resources/Orthanc/Sdk-1.5.4)
  elseif (ORTHANC_SDK_VERSION STREQUAL "1.9.2")
    include_directories(${ORTHANC_DATABASES_ROOT}/Resources/Orthanc/Sdk-1.9.2)
  elseif (ORTHANC_SDK_VERSION STREQUAL "framework")
    set(tmp ${ORTHANC_FRAMEWORK_ROOT}/../../OrthancServer/Plugins/Include/)
    message(${tmp})
    if (NOT EXISTS ${tmp}/orthanc/OrthancCDatabasePlugin.h)
      message(FATAL_ERROR "Your copy of the Orthanc framework doesn't contain the Orthanc plugin SDK")
    endif()    
    include_directories(${tmp})
  else()
    message(FATAL_ERROR "Unsupported version of the Orthanc plugin SDK: ${ORTHANC_SDK_VERSION}")
  endif()
else ()
  CHECK_INCLUDE_FILE_CXX(orthanc/OrthancCDatabasePlugin.h HAVE_ORTHANC_H)
  if (NOT HAVE_ORTHANC_H)
    message(FATAL_ERROR "Please install the headers of the Orthanc plugins SDK")
  endif()
endif()


if (NOT DEFINED ORTHANC_OPTIMAL_VERSION_MAJOR)
  message(FATAL_ERROR "ORTHANC_OPTIMAL_VERSION_MAJOR is not defined")
endif()

if (NOT DEFINED ORTHANC_OPTIMAL_VERSION_MINOR)
  message(FATAL_ERROR "ORTHANC_OPTIMAL_VERSION_MINOR is not defined")
endif()

if (NOT DEFINED ORTHANC_OPTIMAL_VERSION_REVISION)
  message(FATAL_ERROR "ORTHANC_OPTIMAL_VERSION_REVISION is not defined")
endif()


add_definitions(
  -DHAS_ORTHANC_EXCEPTION=1
  -DORTHANC_BUILDING_SERVER_LIBRARY=0
  -DORTHANC_ENABLE_PLUGINS=1
  -DORTHANC_OPTIMAL_VERSION_MAJOR=${ORTHANC_OPTIMAL_VERSION_MAJOR}
  -DORTHANC_OPTIMAL_VERSION_MINOR=${ORTHANC_OPTIMAL_VERSION_MINOR}
  -DORTHANC_OPTIMAL_VERSION_REVISION=${ORTHANC_OPTIMAL_VERSION_REVISION}
  )


list(APPEND DATABASES_SOURCES
  ${ORTHANC_CORE_SOURCES}
  ${ORTHANC_DATABASES_ROOT}/Framework/Plugins/DatabaseBackendAdapterV2.cpp
  ${ORTHANC_DATABASES_ROOT}/Framework/Plugins/DatabaseBackendAdapterV3.cpp
  ${ORTHANC_DATABASES_ROOT}/Framework/Plugins/IndexBackend.cpp
  ${ORTHANC_DATABASES_ROOT}/Framework/Plugins/StorageBackend.cpp
  ${ORTHANC_DATABASES_ROOT}/Resources/Orthanc/Databases/DatabaseConstraint.cpp
  ${ORTHANC_DATABASES_ROOT}/Resources/Orthanc/Databases/ISqlLookupFormatter.cpp
  ${ORTHANC_DATABASES_ROOT}/Resources/Orthanc/Plugins/OrthancPluginCppWrapper.cpp
  )
