// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/aura/client/transient_window_client.h"

namespace aura {
namespace client {

namespace {

TransientWindowClient* instance = nullptr;

}  // namespace

void SetTransientWindowClient(TransientWindowClient* client) {
  instance = client;
}

TransientWindowClient* GetTransientWindowClient() {
  return instance;
}

}  // namespace client
}  // namespace aura