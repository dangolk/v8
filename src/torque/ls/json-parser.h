// Copyright 2019 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_TORQUE_LS_JSON_PARSER_H_
#define V8_TORQUE_LS_JSON_PARSER_H_

#include "src/torque/ls/json.h"

namespace v8 {
namespace internal {
namespace torque {
namespace ls {

JsonValue ParseJson(const std::string& input);

}  // namespace ls
}  // namespace torque
}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_LS_JSON_PARSER_H_
