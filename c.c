

#if __has_include(<AvailabilityInternalPrivate.h>)
  #include <AvailabilityInternalPrivate.h>
#endif

#ifndef __MAC_OS_X_VERSION_MIN_REQUIRED
    #if defined(__has_builtin) && __has_builtin(__is_target_os)
        #if __is_target_os(macos)
            #define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_OS_VERSION_MIN_REQUIRED__
            #define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_14_2
        #endif
    #elif  __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 
        #define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
        #define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_14_2
    #endif
#endif

int main(int argc, char** argv)
{
    
    return 0;
}
