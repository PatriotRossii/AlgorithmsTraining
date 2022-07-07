#include <cassert>
#include "solution.hpp"

int main() {
    assert(is_sufficient(1, 2, 2003) == 0);
    assert(is_sufficient(2, 29, 2008) == 1);

    assert(is_sufficient(12, 12, 2004) == 0);
    assert(is_sufficient(13, 12, 2004) == 1);
    assert(is_sufficient(12, 13, 2004) == 1);

    assert(is_sufficient(12, 12, 2004) == 1);

}