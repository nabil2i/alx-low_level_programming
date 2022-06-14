#!/bin/bash
wget -P /tmp https://github.com/nabil2i/alx-low_level_programming/blob/3441a5d432e01276715996d31235cebc84781030/0x18-dynamic_libraries/libnab.so
export LD_PRELOAD=/tmp/libnab.so
