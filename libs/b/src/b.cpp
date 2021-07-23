#include <a/a.hpp>
#include <b/b.hpp>

namespace b {

int do_b()
{
    return a::do_a() + 1;
}

} // namespace a

