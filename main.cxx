#include <dlfcn.h>
#include <iostream>

int main()
{
    void *echo_lib = dlopen("./libEchoLib.so", RTLD_LAZY);
    if (!echo_lib) {
      std::cerr << dlerror() << '\n';
      return 1;
    }
    typedef void (*cat_t)();
    cat_t cat_func = reinterpret_cast<cat_t>(dlsym(echo_lib, "cat"));
    cat_func();
    dlclose(echo_lib);
    
    return 0;
}
