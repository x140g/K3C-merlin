cmd_/home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/wimax/.install := /bin/bash scripts/headers_install.sh /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/wimax /home/paldier/asuswrt/release/src-lantiq/linux/linux-3.10.104/include/uapi/linux/wimax i2400m.h; /bin/bash scripts/headers_install.sh /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/wimax /home/paldier/asuswrt/release/src-lantiq/linux/linux-3.10.104/include/linux/wimax ; /bin/bash scripts/headers_install.sh /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/wimax /home/paldier/asuswrt/release/src-lantiq/linux/linux-3.10.104/include/generated/uapi/linux/wimax ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/wimax/$$F; done; touch /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/wimax/.install