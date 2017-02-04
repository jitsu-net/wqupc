#include "wqupc/wqupc.h"

using org::xaepient::wqupc::WQUPC;

WQUPC::WQUPC() :
        WQUPC(0)
{
}

WQUPC::WQUPC(std::size_t size) :
        id(size, 0),
        sz(size, 1)
{
    for (std::size_t idx = 0; idx < size; ++idx)
    {
        id[idx] = idx;
    }
}

bool WQUPC::connected(std::size_t p, std::size_t q) {
    return root(p) == root(q);
}

void WQUPC::join(std::size_t p, std::size_t q) {
    auto i = root(p);
    auto j = root(q);
    if (i == j)
    {
        return;
    }
    else if (sz[i] < sz[j])
    {
        id[i] = j;
        sz[j] += sz[i];
    }
    else
    {
        id[j] = i;
        sz[i] += sz[j];
    }
}

std::size_t WQUPC::root(std::size_t i)
{
    while (i != id[i])
    {
        id[i] = id[id[i]];
        i = id[i];
    }
    return i;
}

std::size_t WQUPC::size() const
{
    return id.size();
}

