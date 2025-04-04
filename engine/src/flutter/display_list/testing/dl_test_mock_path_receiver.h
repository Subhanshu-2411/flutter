// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_DISPLAY_LIST_TESTING_DL_TEST_MOCK_PATH_RECEIVER_H_
#define FLUTTER_DISPLAY_LIST_TESTING_DL_TEST_MOCK_PATH_RECEIVER_H_

#include "gmock/gmock.h"

#include "flutter/display_list/geometry/dl_path.h"

namespace flutter {
namespace testing {
class DlPathReceiverMock : public DlPathReceiver {
 public:
  MOCK_METHOD(void,
              RecommendSizes,
              (size_t verb_count, size_t point_count),
              (override));
  MOCK_METHOD(void, RecommendBounds, (const DlRect& bounds), (override));
  MOCK_METHOD(void,
              SetPathInfo,
              (DlPathFillType fill_type, bool is_convex),
              (override));
  MOCK_METHOD(void, MoveTo, (const DlPoint& p2), (override));
  MOCK_METHOD(void, LineTo, (const DlPoint& p2), (override));
  MOCK_METHOD(void, QuadTo, (const DlPoint& cp, const DlPoint& p2), (override));
  MOCK_METHOD(bool,
              ConicTo,
              (const DlPoint& cp, const DlPoint& p2, DlScalar weight),
              (override));
  MOCK_METHOD(void,
              CubicTo,
              (const DlPoint& cp1, const DlPoint& cp2, const DlPoint& p2),
              (override));
  MOCK_METHOD(void, Close, (), (override));
};

}  // namespace testing
}  // namespace flutter

#endif  // FLUTTER_DISPLAY_LIST_TESTING_DL_TEST_MOCK_PATH_RECEIVER_H_
