/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef GPU_OutOfMemoryError_H_
#define GPU_OutOfMemoryError_H_

#include "Error.h"

namespace mozilla {
class ErrorResult;
namespace dom {
class GlobalObject;
}  // namespace dom
namespace webgpu {

class OutOfMemoryError final : public Error {
 public:
  GPU_DECL_JS_WRAP(OutOfMemoryError)

  OutOfMemoryError(nsIGlobalObject* const aGlobal, const nsAString& aMessage)
      : Error(aGlobal, aMessage) {}

  OutOfMemoryError(nsIGlobalObject* const aGlobal, const nsACString& aMessage)
      : Error(aGlobal, aMessage) {}

 private:
  ~OutOfMemoryError() override = default;

 public:
  static already_AddRefed<OutOfMemoryError> Constructor(
      const dom::GlobalObject& aGlobal, const nsAString& aString,
      ErrorResult& aRv);
};

}  // namespace webgpu
}  // namespace mozilla

#endif  // GPU_OutOfMemoryError_H_
