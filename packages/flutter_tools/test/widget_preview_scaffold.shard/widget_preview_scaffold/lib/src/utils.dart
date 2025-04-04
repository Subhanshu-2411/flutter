// Copyright 2014 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import 'package:flutter/material.dart';

/// Returns a [TextStyle] with [FontFeature.proportionalFigures] applied to
/// fix blurry text.
TextStyle fixBlurryText(TextStyle style) {
  return style.copyWith(
    fontFeatures: [const FontFeature.proportionalFigures()],
  );
}

/// A basic vertical spacer.
class VerticalSpacer extends StatelessWidget {
  /// Creates a basic vertical spacer.
  const VerticalSpacer({super.key});

  @override
  Widget build(BuildContext context) {
    return const SizedBox(height: 10);
  }
}
