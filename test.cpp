#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl;
#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)



inline auto ASSERT(bool cond, const std::string& msg) 
        noexcept {
            if (UNLIKELY(!cond))  {
                std::cerr << msg << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        
int main() {

    
   
}