// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_THIRD_PARTY_QUIC_PLATFORM_API_QUIC_ALIGNED_H_
#define NET_THIRD_PARTY_QUIC_PLATFORM_API_QUIC_ALIGNED_H_

#include "net/third_party/quic/platform/impl/quic_aligned_impl.h"

#define QUIC_ALIGN_OF QUIC_ALIGN_OF_IMPL
#define QUIC_ALIGNED(X) QUIC_ALIGNED_IMPL(X)
#define QUIC_CACHELINE_ALIGNED QUIC_CACHELINE_ALIGNED_IMPL
#define QUIC_CACHELINE_SIZE QUIC_CACHELINE_SIZE_IMPL

#endif  // NET_THIRD_PARTY_QUIC_PLATFORM_API_QUIC_ALIGNED_H_
