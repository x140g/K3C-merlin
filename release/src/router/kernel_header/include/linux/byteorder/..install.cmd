cmd_/home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/byteorder/.install := /bin/bash scripts/headers_install.sh /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/byteorder /home/paldier/asuswrt/release/src-lantiq/linux/linux-3.10.104/include/uapi/linux/byteorder big_endian.h little_endian.h; /bin/bash scripts/headers_install.sh /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/byteorder /home/paldier/asuswrt/release/src-lantiq/linux/linux-3.10.104/include/linux/byteorder ; /bin/bash scripts/headers_install.sh /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/byteorder /home/paldier/asuswrt/release/src-lantiq/linux/linux-3.10.104/include/generated/uapi/linux/byteorder ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/byteorder/$$F; done; touch /home/paldier/asuswrt/release/src-lantiq/router/kernel_header/include/linux/byteorder/.install