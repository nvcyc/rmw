// Copyright 2024 NVIDIA Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rmw/rmw.h"
#include "rmw/error_handling.h"

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_publisher_get_matched_endpoints_info(
  const rmw_publisher_t * publisher,
  rcutils_allocator_t * allocator,
  rmw_matched_endpoint_info_t ** endpoints,
  size_t * count)
{
  // Stub implementation for RMW implementations that don't support locality detection
  (void)publisher;
  (void)allocator;
  
  // Return empty array with UNSUPPORTED status
  *endpoints = NULL;
  *count = 0;
  
  return RMW_RET_UNSUPPORTED;
}

