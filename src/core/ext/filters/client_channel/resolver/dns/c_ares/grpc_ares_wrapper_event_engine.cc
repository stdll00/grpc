// Copyright 2021 The gRPC Authors
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
#include <grpc/support/port_platform.h>

#include "src/core/lib/iomgr/port.h"  // IWYU pragma: keep

#if GRPC_ARES == 1 && defined(GRPC_USE_EVENT_ENGINE)

#include "src/core/ext/filters/client_channel/resolver/dns/c_ares/grpc_ares_wrapper.h"

bool grpc_ares_query_ipv6() {
  /* The libuv grpc code currently does not have the code to probe for this,
   * so we assume for now that IPv6 is always available in contexts where this
   * code will be used. */
  return true;
}

#endif /* GRPC_ARES == 1 && defined(GRPC_USE_EVENT_ENGINE) */
