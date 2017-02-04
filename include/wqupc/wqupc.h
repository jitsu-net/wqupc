#ifndef ORG_XAEPIENT_WQUPC_H_
#define ORG_XAEPIENT_WQUPC_H_

#include <vector>

namespace org {
namespace xaepient {
namespace wqupc {

class WQUPC
{
public:
    WQUPC();
    WQUPC(std::size_t size);
    ~WQUPC() = default;
    bool connected(std::size_t p, std::size_t q);
    void join(std::size_t p, std::size_t q);
    std::size_t size() const;
private:
    std::size_t root(std::size_t i);
    std::vector<std::size_t> id;
    std::vector<std::size_t> sz;
}; // class WQUPC

} // namespace wqupc
} // namespace xaepient
} // namespace org

#endif

