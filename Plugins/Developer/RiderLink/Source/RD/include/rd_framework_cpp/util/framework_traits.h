#ifndef RD_CPP_FRAMEWORK_TRAITS_H
#define RD_CPP_FRAMEWORK_TRAITS_H

// #include "serialization/SerializationCtx.h"
// #include "protocol/Buffer.h"

#include <type_traits>
#include <utility>

namespace rd
{
namespace util
{
template <typename S, typename T = decltype((S::read(std::declval<rd::SerializationCtx&>(), std::declval<rd::Buffer&>())))>
using read_t = T;

static_assert(util::is_same_v<std::wstring, read_t<Polymorphic<std::wstring>>>, " ");
}	 // namespace util
}	 // namespace rd

#endif	  // RD_CPP_FRAMEWORK_TRAITS_H
