#ifndef SAMPLE_PACKAGE__SAMPLE_LIB_HPP_
#define SAMPLE_PACKAGE__SAMPLE_LIB_HPP_

namespace sample_package
{

class SampleLib
{
public:
  SampleLib();

  auto add(int a, int b) -> int;
  auto subtract(int a, int b) -> int;
  auto multiply(int a, int b) -> int;

  ~SampleLib();
};

}  // namespace sample_package

#endif  // SAMPLE_PACKAGE__SAMPLE_LIB_HPP_
