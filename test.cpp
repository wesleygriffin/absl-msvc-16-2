#include "absl/container/inlined_vector.h"

struct Foo {
  int i{0};
  double j{1.0};
};

struct Bar {
  static constexpr size_t const kNumFoos = 8;
  absl::InlinedVector<Foo, kNumFoos> foos;
};

int main(int, char**) {
  Foo f;
  Bar b;
  b.foos.push_back(f);
}
