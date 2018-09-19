// Copyright (c) Facebook, Inc. and its affiliates.

// This source code is licensed under the MIT license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <jschelpers/JavaScriptCore.h>

namespace facebook {
namespace react {

void addJSCMemoryHooks(JSGlobalContextRef ctx);

} }