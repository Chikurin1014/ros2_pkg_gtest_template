#include "sample_package/sample_lib.hpp"

namespace sample_package
{

SampleLib::SampleLib() {}

auto SampleLib::add(int a, int b) -> int { return a + b; }

auto SampleLib::subtract(int a, int b) -> int { return a - b; }

auto SampleLib::multiply(int a, int b) -> int { return a * b; }

SampleLib::~SampleLib() {}

}  // namespace sample_package
